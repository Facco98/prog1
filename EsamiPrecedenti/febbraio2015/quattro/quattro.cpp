#include <iostream>

using namespace std;
const int MAXDIM = 100;

void bubblesort(int v[], int dim);
void printarray( int v[], int dim){

    for( int i = 0; i < dim; i++ ){

        cout << v[i] << " ";
    }
    cout << endl;

}

void bubblesort_ric( int* v, int index, int dim);
void bubblesort_ext_ric( int* v, int index, int dim);
void scambia( int& a, int& b);

int main () {
    /*int myarray[MAXDIM];
    int dim;
    */
    int myarray[MAXDIM] = {41,3,9,1,5,17,6,20,37,2,8,23,10,0,11,19};
    int dim = 16;
    bubblesort(myarray,dim);
    printarray(myarray,dim);

    /*readarray(myarray,dim);
    bubblesort(myarray,dim);
    printarray(myarray,dim);
     */
}

void scambia( int &i, int &j ){

    int tmp = i;
    i = j;
    j = tmp;
}

void bubblesort( int* v, int dim ){

    bubblesort_ext_ric(v,0,dim);

}


void bubblesort_ric( int* v, int index, int dim ){

    if( index < dim -1 ){

        bubblesort_ric(v, index+1, dim);
        if( v[index] > v[index+1] )
            scambia(v[index], v[index+1]);


    }


}

void bubblesort_ext_ric( int* v, int start, int dim ){

    if( start < dim ){

        bubblesort_ric(v, start, dim);
        bubblesort_ext_ric(v, start+1, dim);

    }
}