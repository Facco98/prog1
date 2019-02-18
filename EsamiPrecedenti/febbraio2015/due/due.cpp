//
// Created by Claudio Facchinetti on 09/01/18.
//

#include <iostream>
#include <cmath>

using namespace std;

void stampa( double* v, int dim );
void leggi( int* v, int& dim );
double* normalizza( int* v, int dim );
double norma( int* v, int dim );
double norma_ric( int* v, int index, int dim, double sum );
double* normalizza_ric( int* v, double* v1, int index, int dim, double norma );

const int MAX_DIM = 100;
int main() {
    int array[MAX_DIM];
    int dim;
    leggi(array, dim);
    double* normalizzato = normalizza(array, dim);
    cout << "Array normalizzato: " << endl;
    stampa(normalizzato, dim);
    return 0;
}
// Inserire qui sotto le DEFINIZIONI delle funzioni

void stampa( double v[], int dim ){

    for( int i = 0; i < dim; i++ )
        cout << v[i] << " ";
    cout << endl;

}

void leggi( int* v, int& dim ){

    cout << "Inserisci il numero di elementi ( <" << MAX_DIM << " ): ";
    cin >> dim;
    for( int i = 0; i < dim; i++ ){

        cout << "Inserisci il valore: ";
        cin >> v[i];
    }
}

double* normalizza( int v[], int dim ){

    double* v1 = new double[dim];
    double val = norma(v, dim);
    return normalizza_ric(v, v1, 0, dim, val);

}

double* normalizza_ric( int v[], double* v1, int index, int dim, double norma ){

    double* res;
    if( index < dim ){
        v1[index] = v[index] / norma;
        res = normalizza_ric(v, v1, index+1, dim, norma);
    } else{
        res = v1;
    }
    return res;

}

double norma( int v[], int dim ){

    return norma_ric(v, 0, dim, 0);
}

double norma_ric(int v[], int index, int dim, double sum){

    double res;
    if( index < dim ){

        sum+=v[index]*v[index];
        res = norma_ric(v, index+1, dim, sum);

    } else{
        res = sqrt(sum);
    }
    return res;

}