//
// Created by Claudio Facchinetti on 08/01/18.
//

#include <iostream>
#include <string>

using namespace std;
const char SEGNAPOSTO = '!';
const int DIMMAX = 40;
// Dichiarare qui sotto la funzione reverse_array

void reverse_array(char* array, int n);
void reverse_array_ric( char* array, int begin, int end);
void controllaESostituisci( char& carattere );

int main (int argc, char* argv[]) {
    char input[DIMMAX];
    cout << "Introdurre stringa da invertire: ";
    cin >> input;
// Assumiamo che sia sempre strlen(input) < DIMMAX
    reverse_array(input, strlen(input));
    cout << "Array invertito: " << input << endl;
    return 0;
}
// Definire qui sotto la funzione reverse_a

void reverse_array( char* array, int n){

    reverse_array_ric(array, 0, n-1);

}

void reverse_array_ric(char* array, int begin, int end){

    if( begin <= end ){

        char tmp = array[begin];
        array[begin] = array[end];
        array[end] = tmp;
        controllaESostituisci(array[begin]);
        controllaESostituisci(array[end]);
        cout << array << endl;
        reverse_array_ric(array, begin+1, end-1);


    }
}

void controllaESostituisci( char& carattere ){

    if( carattere == 'a' || carattere == 'e' || carattere == 'i' || carattere == 'o' || carattere == 'u')
        carattere = '!';

}