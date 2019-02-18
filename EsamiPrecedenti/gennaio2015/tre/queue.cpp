//
// Created by Claudio Facchinetti on 09/01/18.
//

#include "queue.h"
#include <iostream>

using namespace std;

static int succ( int i, int maxdim ){

    return (i+1)%maxdim;

}

static bool isEmpty( const queue& q ){

    return q.head == q.tail;

}

static bool isFull( const queue& q ){

    return succ(q.tail, q.dim) == q.head;

}

void init(queue &q, int maxdim){

    q.elem = new float[maxdim + 1];
    q.head = q.tail = 0;
    q.dim = maxdim + 1;

}

void deinit(queue &q){

    q.head = q.tail = 0;
    delete[] q.elem;

}
bool enqueue(queue &q, float n){

    bool res;
    if( isEmpty(q) ){

        q.head = 0;
        q.tail = 1;
        q.elem[0] = n;
        res = true;
    }
    else if( !isFull(q) ){

        q.elem[q.tail] = n;
        q.tail = succ(q.tail, q.dim);
        res = true;
    } else if( isFull(q) )
        res = false;
    return res;

}
bool dequeue(queue &q){

    bool res;
    if(!isEmpty(q)){
        res = true;
        q.head = succ(q.head, q.dim);
    } else
        res = false;
    return res;

}
bool first(queue &q, float &out){

    bool res;
    if(!isEmpty(q)){
        res = true;
        out = q.elem[q.head];
    } else
        res = false;
    return res;

}
void print(const queue &q){

    for( int i = q.head; i != q.tail; i = succ(i, q.dim) ){
        cout << q.elem[i] << " ";
    }
    cout << endl;

}
