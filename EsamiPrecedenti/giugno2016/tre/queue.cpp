//
// Created by Claudio Facchinetti on 08/01/18.
//

#include "queue.h"
#include <iostream>

using namespace std;

void init (queue &q){

    q.head = NULL;
    q.tail = NULL;
}

void enqueue (queue &q, long val){

    node* n = new node;
    n -> val = val;
    if(empty(q) == TRUE){
        n -> next = NULL;
        q.head = q.tail = n;
    } else{
        q.tail->next = n;
        q.tail = n;
    }

}
retval dequeue (queue &q){

    retval res;
    if( empty(q) == TRUE )
        res = FALSE;
    else{
        node* tmp = q.head;
        q.head = q.head -> next;
        delete tmp;
        res = TRUE;
    }
    return res;

}

retval empty (const queue &q){

    return (q.head == NULL? TRUE : FALSE);

}
retval first (const queue &q, long &result){

    retval res;
    if( empty(q) == TRUE )
        res = FALSE;
    else{
        result = q.head -> val;
        res = TRUE;
        return res;
    }

}

void print (const queue &q){

    node* n = q.head;
    while( n != NULL ) {
        cout << n->val << " ";
        n = n->next;
    }
    cout << endl;
}
