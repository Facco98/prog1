#include <fstream>
#include <cstring>
#include <cstdlib>

using namespace std;

const int maxLen = 80 + 1;

int main(int arcv, char** arg){

    char* inputFile = arg[1];
    int numero_righe = atoi( arg[2] );
    char* outputFile = arg[3];

    fstream inFile;
    inFile.open(inputFile, ios::in);

    fstream outFile;
    outFile.open(outputFile, ios::out | ios::ate);

    char** righe = new char*[numero_righe];
    char* riga = new char[maxLen];

    inFile.getline(riga, maxLen);

    int i;

    for( i = 0; i < numero_righe && !inFile.eof(); i++ ){

        righe[i] = new char[strlen(riga) +1 ];
        strcpy(righe[i], riga);
        inFile.getline(riga, maxLen);

    }

    delete[] riga;

    for( int j = i - 1; j >= 0; j-- ){

        if( j % 2 == 1 )
            outFile << righe[j] << endl;
        delete[] righe[j];
    }

    return 0;

}