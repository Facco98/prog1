//
// Created by Claudio Facchinetti on 09/01/18.
//

#include <iostream>
#include <fstream>

using namespace std;

int main( int argc, char* argv[] ){

    if( argc < 3 ){

        cout << "Usage: ./a.out <input> <output>"<< endl;
        exit(-1);

    }

    fstream fin, fout;
    fin.open(argv[1], ios::in);
    fout.open(argv[2], ios::out|ios::ate);

    char parola[255];
    fin >> parola;

    while( !fin.eof() ){

        int cont = 0;
        for( int i = 0; parola[i] != '\0'; i++){

            if( parola[i] == 'a' )
                cont ++;

        }
        fout << cont;
        fin >> parola;
        if(!fin.eof())
            fout << " ";

    }
    fin.close();
    fout.close();
    return 0;
}