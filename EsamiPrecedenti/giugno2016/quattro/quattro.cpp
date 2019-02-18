//
// Created by Claudio Facchinetti on 08/01/18.
//
using namespace std;
#include <iostream>

int converti(char* parola, int sign, int index);
int numero( char* parola, int index, int currentValue);

int main (int argc, char * argv[]) {
    cout << "Ho letto " << converti(argv[1],1,0) <<
         ", il numero moltiplicato per 5 e‘: " <<
         5*converti(argv[1],1,0) << endl;
}

int converti( char* parola, int sign, int index ){

    int res;
    if( parola[index] == '-' )
        res = converti(parola, sign*(-1), index+1);
    else if ( parola[index] != '+' )
        res = sign * numero(parola, index, 0);
    else
        res = converti(parola, sign, index+1);
    return res;

}

int numero( char* parola, int index, int currentValue ) {

    int res;
    if (parola[index + 1] != '\0'){
        currentValue = (currentValue * 10) + (parola[index] - '0');
        res = numero(parola, index + 1, currentValue);
    } else{
        res = (currentValue*10) + (parola[index] -'0');
    }
    return res;

}