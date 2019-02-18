//
// Created by Claudio Facchinetti on 08/01/18.
//

#include "stack.h"
#include <iostream>

using namespace std;


static bool isFull( const stack& s ){

    return s.index == s.dim;

}

static bool isEmpty( const stack& s ){

    return s.index == 0;

}

void init( stack& s, int maxdim ){

    s.dim = maxdim;
    s.elem = new (nothrow) double[maxdim];
    s.index = 0;
}

void deinit(stack &s){

    delete[] s.elem;
    s.dim = 0;
    s.index = 0;

}

bool push(stack &s, double n){

    bool res;
    if(!isFull(s)){
        s.elem[s.index] = n;
        s.index++;
        res = true;
    } else
        res = false;
    return res;

}

bool top(const stack &s, double &out){

    bool result;
    if(!isEmpty(s)){

        out = s.elem[s.index-1];
        result = true;

    }
    else{
        result = false;
    }
    return result;

}

bool pop(stack &s){

    bool result;
    if(!isEmpty(s)){
        s.index -= 1;
        result = true;
    }
    else
        result = false;
    return result;

}

void print(const stack &s){

    for( int i = 0; i < s.index; i++ ){
        cout << s.elem[i] << endl;
    }

}
