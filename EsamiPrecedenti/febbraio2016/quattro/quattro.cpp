using namespace std;
#include <iostream>

const int Zero = 0;

int sum(int n,int m);
int prod (int n,int m);
int power (int n,int m);

bool IsZero( int n ){

    return n == 0;

}

int prec ( int n ){
    return n-1;
}

int succ( int n ){
    return n+1;
}

int main () {
    int n,m;
    cout << "n,m? ";
    cin >> n >> m;
    cout << "La somma tra n e m e‘ : " << sum(n,m) << endl;
    cout << "Il prodotto tra n e m e‘ : " << prod(n,m) << endl;
    cout << "La potenza di n alla m e‘ : " << power(n,m) << endl;
}

int sum( int m, int n ){

    if( IsZero(n) )
        return m;
    else
        return sum(succ(m), prec(n));

}

int prod( int n, int m ){

    if( IsZero(m) )
        return 0;
    else if( IsZero(prec(m)) )
        return n;
    else
        return sum(n, prod(n, prec(m)));

}


int power( int n, int m){

    if( m == 0 )
        return 1;
    else if( m == 1 )
        return n;
    else
        return prod(n, power(n,prec(m)));

}


