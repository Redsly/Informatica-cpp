#include <iostream>

using namespace std;

int main()
{
    int n, cifra_curenta, cifra_precedenta;
    do{
    cout << "n=";
    cin>>n;
    }while(n<=100);
    while(n){
        cifra_precedenta=cifra_curenta;
        cifra_curenta=n%10;
        n=n/10;
    }
    cout <<cifra_curenta+cifra_precedenta;
    return 0;
}
