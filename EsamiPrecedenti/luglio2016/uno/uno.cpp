//
// Created by Claudio Facchinetti on 08/01/18.
//

#include <iostream>
#include <cstring>
#include <fstream>

using namespace std;

int main( int argc, char* argv[] ){

    if( argc < 4 ){

        cout << "Usage: ./a.out <first file> <second file> <output file>" << endl;
        exit(-1);

    }

    fstream fin1, fin2;
    fstream fout;

    fin1.open(argv[1], ios::in);
    fin2.open(argv[2], ios::in);

    fout.open(argv[3], ios::out|ios::ate);

    int righe1, righe2;
    fin1 >> righe1;
    fin2 >> righe2;

    char stringa1[256];
    fin1 >> stringa1;
    char stringa2[256];
    fin2 >> stringa2;

    int i,j;
    i = j = 0;

    while( i < righe1 && j < righe2 ){

        cout << stringa1 << " " << stringa2 << endl;
        int cfr = strcmp( stringa1, stringa2 );
        while( cfr < 0 && i <= righe1 ){

            fin1>>stringa1;
            i++;
            cfr = strcmp( stringa1, stringa2 );
            cout << stringa1 << " " << stringa2 << endl;

        }
        if( cfr == 0 ){
            fout << stringa1 << endl;
            fin2 >> stringa2;
            j++;
            cout << stringa1 << " " << stringa2 << endl;
        } else{

            fin2 >> stringa2;
            i++;
            cout << stringa1 << " " << stringa2 << endl;

        }
    }

    fin1.close();
    fin2.close();
    fout.close();

}

