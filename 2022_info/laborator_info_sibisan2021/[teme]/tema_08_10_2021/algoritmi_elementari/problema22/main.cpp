#include <iostream>

using namespace std;

int main()
{
    int n, n_par=0,n_impar=0, c, p_par=1, p_impar=1;
    cout << "n=";
    cin>>n;
    while(n){
        c=n%10;
        n=n/10;
        if(c%2==0){
            n_par=p_par*c+n_par;
            p_par*=10;
        }
        if(c%2!=0){
            n_impar=p_impar*c+n_impar;
            p_impar*=10;
        }
    }
    cout << n_par<<"\t"<<n_impar;
    return 0;
}
