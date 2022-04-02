#include <iostream>

using namespace std;

int main()
{
    int n, n_copie, prim=1, cifra_curenta, numar_n_final=0, nr_cifre=0;
    cout <<"n= ";
    cin>>n;
    n_copie=n;
    for(int d=2;d*d<n && prim==1;d++){
        if(n%d==0){
            prim=0;
        }
    }
    while(n_copie){
            nr_cifre++;
            n_copie=n_copie/10;
    }
    if(prim==1){
        while(n){
            if(nr_cifre<=2){
                cifra_curenta=n%10;
                n=n/10;
                numar_n_final=numar_n_final*10+cifra_curenta;
            }
            nr_cifre--;
            n=n/10;
        }

    }
    cout << numar_n_final;
    return 0;
}
