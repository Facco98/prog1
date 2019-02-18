//
// Created by Claudio Facchinetti on 08/01/18.
//

#include <iostream>

using namespace std;

const int dim = 10;

void sommaArray(int* n1, int* n2, int* res, int dim);

void sommaArrayRic(int* n1, int* n2, int* res, int dim, int index);

void stampaArray( int* array, int n );

int main(){

    int ar1[] = {5, 9, 2, 7, 10, 15, 3, 8, 4, 12};
    int ar2[] = {6, 3, 21, 1, 17, 11, 24, 9, 8, 19};
    int ar3[dim];

    sommaArray(ar1,ar2,ar3,dim);

    stampaArray( ar3, dim );

}

void sommaArray(int* n1, int* n2, int* res, int dim){

    sommaArrayRic(n1, n2, res, dim, 0);
}

void sommaArrayRic(int* n1, int* n2, int* res, int dim, int index){

    if( index < dim ){

        res[index] = n1[index] + n2[index];
        sommaArrayRic( n1, n2, res, dim, index+1 );
    }

}

void stampaArray( int* array, int n ){

    for( int i = 0; i < n; i++ )
        cout << array[i] << endl;

}