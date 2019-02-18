//
// Created by Claudio Facchinetti on 09/01/18.
//
using namespace std;
#include <iostream>
#include <iomanip>
long long f (int n);
int main() {
    int n;
    cout << "n? (n >= 0): ";
    cin >> n;
    for (int i = 0;i <=n; i++)
        cout <<  "f(" << setw(2) << i << ")="
             << setw(10) <<  f(i) << endl;
    return 0; }

long long f( int n ){

    long long fibonacci = 0;
    if( n >= 0 ) {
        if (n == 0 || n == 1)
            fibonacci = 1;
        else
            fibonacci = f(n - 1) + f(n - 2);
    }
    return fibonacci;

}
