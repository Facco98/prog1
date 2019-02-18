//
// Created by Claudio Facchinetti on 09/01/18.
//

#include "stack.h"
#include <iostream>

using namespace std;

static bool isEmpty( const stack& s ){

    return s == NULL;

}

void init (stack &s){

    s = NULL;

}


void deinit(stack &s){

    if(!isEmpty(s)){

        stack s1 = s;
        while(s1!=NULL){

            stack tmp = s1;
            s1 = s1 -> next;
            delete tmp;

        }

    }
}

void push(stack &s, char val){

    stack tmp = new node;
    tmp -> val = val;
    tmp -> next = s;
    s = tmp;

}
retval pop(stack &s){

    retval res;
    if( isEmpty(s) ){

        res = FALSE;

    }
    else{

        stack tmp = s;
        s = s -> next;
        delete tmp;
        res = TRUE;
    }
    return res;

}
retval nempty (const stack &s){

    return (retval)!(isEmpty(s));

}
retval top(const stack &s, char &result){

    retval res;
    if(!isEmpty(s)){

        result = s -> val;
        res = TRUE;

    } else
        res = FALSE;
    return res;

}
void print(const stack &s){

    stack tmp = s;
    while(tmp!=NULL){

        cout << tmp -> val << " ";
        tmp = tmp -> next;

    }
    cout << endl;

}