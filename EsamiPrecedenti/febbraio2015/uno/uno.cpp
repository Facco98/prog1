//
// Created by Claudio Facchinetti on 09/01/18.
//

#include <iostream>
#include <iomanip>
using namespace std;

double calcola( double x, int n, double epsilon );
double potenza( double x, int esp );
double valoreAssoluto(double x);

int main () {
    double epsilon, x;
    int n;
    cout << "Inserisci il numero di termini dell'approssimazione: ";
    cin >> n;
    cout << "Inserisci l'errore massimo epsilon: ";
    cin >> epsilon;
    char c; do {
        cout << "Inserisci il valore x in cui vuoi calcolare f(x) = 1 / (1 - x) ^ 2: ";
        cin >> x;
        while(x >= 1 || x <= -1) {
            cout << "Valore errato, prego reintrodurre (-1 < x < 1):";
            cin >> x; }
        cout << "L'approssimazione di f(x) e': ";
        cout << setprecision(10) << calcola(x, n, epsilon);
        cout << endl;
        cout << "Continuare (s/n)? ";
        cin >> c;
    } while(c != 'n' && c != 'N');
    return(0); 
}

double calcola(double x, int n, double epsilon ){

    bool epsilonSoddisfatto = false;
    double val = 0, valPrecedente = 0;
    for( int i = 1; i <= n && !epsilonSoddisfatto; i++ ){
        valPrecedente = val;
        val += i * potenza(x, i-1);
        if( valoreAssoluto(val - valPrecedente) < epsilon )
            epsilonSoddisfatto = true;

    }
    return val;
}



double potenza( double x, int esp ){

    double res = 1;
    for( int i = 0 ; i < esp; i++ )
        res*=x;
    return res;

}

double valoreAssoluto( double x ){

    return (x < 0? x*(-1) : x);

}