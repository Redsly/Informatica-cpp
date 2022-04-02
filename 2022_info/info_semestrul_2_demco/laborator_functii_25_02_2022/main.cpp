#include <iostream>

using namespace std;
int conv_baza_b(int nr10, int baza){
    int nb=0;
    int p=1;
    while(nr10!=0){
        nb=nb+p*(nr10%baza);
        p*=10;
        nr10/=baza;
    }
    return nb;
}
int conv_baza_10(int nrb, int baza){
    int n10=0;
    int p=1;
    while(nrb!=0){
        n10=n10+(nrb%10)*p;
        p*=baza;
    }
    return n10;
}
int main()
{
    int n, baza;
    cout << "Numar baza b: ";
    cin>>n;
    cout <<"Baza: ";
    cin>>baza;
    //cout << conv_baza_b(n,baza)<<endl;
    cout << conv_baza_10(n,baza);
    return 0;
}
