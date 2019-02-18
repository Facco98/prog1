//
// Created by Claudio Facchinetti on 08/01/18.
//

using namespace std;
#include <iostream>
#include <iomanip>
long long f (int n);
long long fibonacciRic( long long fibo1, long long fibo2, int current, int max);
long long f1( long long, long long, int, int);
int main()
{
    int n;
    cout << "n? (n >= 0): ";
    cin >> n;
    for (int i = 0;i <=n; i++)
        cout << "f(" << setw(2) << i << ")="
             << setw(10) << f(i) << endl;
    return 0;
}

long long f( int n ){

    long long res;
    if( n == 0 || n == 1 )
        res = 1;
    else
        res = fibonacciRic(1,1,2,n);
    return res;

}

long long fibonacciRic( long long fimeno1, long long fimeno2, int current, int max ){


    long long res;
    if( current == max ) {
        res = fimeno1 + fimeno2;
    }
    else {
        res = fibonacciRic(fimeno1+fimeno2, fimeno1, current + 1, max);
    }
    return res;

}