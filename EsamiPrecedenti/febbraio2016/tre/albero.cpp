//
// Created by Claudio Facchinetti on 08/01/18.
//

#include "albero.h"
#include <iostream>

using namespace std;

void inizializza(Albero &t){

    t = NULL;

}

boolean vuoto( const Albero &t ){

    boolean res;
    if( t == NULL )
        res = VERO;
    else
        res = FALSO;
    return res;

}

boolean inserisci(Albero &t, int val){

    boolean res;
    if( vuoto(t) == VERO ){
        Nodo* nodo = new Nodo;
        nodo -> val = val;
        inizializza(nodo -> sx);
        inizializza(nodo -> dx);
        t = nodo;
        res = VERO;
    }
    else{
        if( val <= t->val )
            res = inserisci(t->sx, val);
        else
            res = inserisci(t->dx, val);
    }

}

boolean cerca(const Albero &t, int val){

    boolean res;
    if( vuoto(t) == VERO )
        res = FALSO;
    else if( t -> val == val )
        res = VERO;
    else if( val < t -> val ){
        res = cerca(t->sx, val);
    }
    else if( val > t -> val )
        res = cerca(t->dx, val);
    return res;

}

void stampa(const Albero &t){
    if(vuoto(t) == FALSO ){
        stampa(t->sx);
        cout << t -> val << " ";
        stampa(t->dx);
    }
}


