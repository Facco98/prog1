#include "stack.h"
#include <iostream>

using namespace std;


void   init   (stack &s){

    s = NULL;

}
void   deinit (stack &s){

    node* tmp = s;
    while( tmp != NULL ){

        node* next = tmp -> next;
        delete tmp;
        tmp = next;

    }
}


void   push   (stack &s, int val) {

    node* tmp = new node;
    tmp -> val = val;
    tmp -> next = s;
    s = tmp;

}
retval pop    (stack &s){

    retval res;
    if(empty(s) == TRUE){
        res = FALSE;
    } else{
        node* tmp = s;
        s = s-> next;
        delete tmp;
        res = TRUE;
    }
    return res;

}

retval empty  (const stack &s){

    retval res;
    if( s == NULL )
        res = TRUE;
    else
        res = FALSE;
    return res;

}
retval top    (const stack &s, int &result){

    retval res;
    if(empty(s) == FALSE){
        result = s->val;
        res = TRUE;
    } else
        res = FALSE;
    return res;

}

void   print  (const stack &s){

    node* tmp = s;
    while( tmp != NULL ){

        cout << tmp -> val << " ";
        tmp = tmp -> next;

    }
    cout << endl;

}