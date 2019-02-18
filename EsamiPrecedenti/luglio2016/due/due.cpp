//
// Created by Claudio Facchinetti on 08/01/18.
//

#include <iostream>
using namespace std;

float* shift(float v[], int n, int j);
void right_shift(float v1[], float v2[], int n, int j, int i);
int main(){
    int J = 0;
    const int N = 10;
    float vector[] = {5.0, 13.2, 26.5, 7.2, 10.7, 9.3, 14.0, 81.0, 65.9, 32.1};
    cout << "Array iniziale: ";
    for(int i=0; i<N; i++) {
        cout << vector[i] << " ";
    }
    cout << endl;
    cout << "Numero spostamenti a destra: ";
    cin >> J;
    float* new_vect = shift(vector, N, J);
    cout << "Nuovo array: ";
    for(int i=0; i<N; i++) {
        cout << new_vect[i] << " ";
    }
    cout << endl;
    delete[] new_vect;
    return 0;
}

void shift_ric( float v[], float* v2, int n, int index, int j ){

    if( index >= 0 ) {
        if (index + j < n)
            v2[index + j] = v[index];
        if (index <= j)
            v2[index] = 0.0;
        shift_ric( v, v2, n, index-1, j);
    }


}

float* shift( float v[], int n, int j ){

    float* v2 = new float[n];
    shift_ric(v, v2, n, n-1, j);
    return v2;

}