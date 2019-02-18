//
// Created by Claudio Facchinetti on 08/01/18.
//
#include <iostream>
#include <iomanip>

using namespace std;


double seno_iperbolico(double x, int nmax, double epsilon);
double power( double x, int esp );
int fact( int n );
double valoreAssoluto( double x );

int main () {
    double epsilon, x;
    int nmax;
    cout << "Inserisci il massimo numero di termini dell’approssimazione nmax: ";
    cin >> nmax;
    cout << "Inserisci l’errore massimo epsilon: ";
    cin >> epsilon;
    char c;
    do {
        cout << "Inserisci il valore x in cui vuoi calcolare sinh(x): ";
        cin >> x;
        cout << "L’approssimazione di sinh(x) e’: " << setprecision(10)
             << seno_iperbolico(x, nmax, epsilon) << endl;
        cout << "Continuare (s/n)? ";
        cin >> c;
    } while(c != 'n' && c != 'N');
    return(0);
}

double seno_iperbolico( double x, int nmax, double epsilon ){

    long double seno = 0;
    long double senoPrecedente = 0;
    bool continua = true;
    for( int i = 0; i <= nmax && continua; i++ ){
        senoPrecedente = seno;
        seno += ( power(x, 2*i+1)  / fact(2*i + 1));
        if(valoreAssoluto(seno - senoPrecedente) < epsilon * valoreAssoluto(seno))
            continua = false;
    }
    return seno;

}

double power( double x, int esp ){

    double p = 1;
    for( int i = 0; i < esp; i++ )
        p *= x;
    return p;
}

int fact( int n ){

    int f = 1;
    for( int i = 2; i <= n; i++ )
        f *= i;
    return f;
}

double valoreAssoluto( double n ){

    return (n <0 ? n*(-1):n);

}