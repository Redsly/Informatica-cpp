#include <iostream>

using namespace std;

int main()
{
    unsigned int n, n_bk, nr_cifre=0,p=1 ,cifra_curenta, nr_final=0;
    do{
        cout << "n= ";
        cin>>n;
    }while(n<=1000);
    n_bk=n;
    while(n_bk){
        n_bk=n_bk/10;
        nr_cifre++;
    }
    while(nr_cifre){
        cifra_curenta=n%10;
        n=n/10;
        if(nr_cifre%2!=0){
            if(cifra_curenta%2==0){
                nr_final=cifra_curenta*p+nr_final;
                p*=10;
            }
        }
        nr_cifre--;
    }
    cout<< nr_final;
    return 0;
}
