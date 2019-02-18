//
// Created by Claudio Facchinetti on 08/01/18.
//

#include <fstream>
#include <cstring>
#include <iostream>

using namespace std;


/*int main(int argc,char* argv[]){
    fstream my_in, my_out;
    char tmp[31];
    if (argc!=3) {
        cout << "Usage: ./a.out <sourcefile>\n";
        exit(0);
    }
    my_in.open(argv[1],ios::in);
    my_out.open(argv[2],ios::out);
    my_in >> tmp;
    if(!(tmp[0] >= 'A' && tmp[0] <= 'Z'))
    tmp[0] = tmp[0] + ('A'-'a');
    while(!my_in.eof()){
        my_out << tmp << " ";
        if(tmp[strlen(tmp)-1] == '.' || tmp[strlen(tmp)-1] == '?' || tmp[strlen(tmp)-1] == '!') {
            my_in >> tmp;
            if(!(tmp[0] >= 'A' && tmp[0] <= 'Z'))
            tmp[0] = tmp[0] + ('A'-'a');
        } else my_in >> tmp;
    }
    my_in.close();
    my_out.close();
    return(0);
}*/

//La mia versione

int main( int argc, char* argv[]){

    if( argc < 3 ){

        cout << "Usage: ./uno <fisrt file> <second file>";
        exit(-1);

    }

    fstream fin;
    fin.open(argv[1], ios::in);

    char parola[30];
    bool maiuscola = true;

    fstream fout;
    fout.open(argv[2], ios::out | ios::ate);

    while( fin >> parola ){

        int ultimoChar = strlen(parola)-1;
        if( maiuscola ) {
            if (parola[0] <= 'z' && parola[0]>='a') {
                parola[0] = parola[0] - 'a' + 'A';
            }
        }
        maiuscola = false;
        cout << parola[ultimoChar] << endl;
        if( parola[ultimoChar] == '!' || parola[ultimoChar] == '?' || parola[ultimoChar] == '.' )
            maiuscola = true;
        fout << parola;
        if( !fin.eof() )
            fout << " ";
    }

    fin.close();
    fout.close();


}
