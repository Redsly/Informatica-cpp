#include <iostream>

using namespace std;

int main()
{
    int n, cifra, n_final=0, pozitia=0;
    do{
    cout << "n=";
    cin>>n;
    }while(n<=100);
    while(n){
        pozitia++;
        cifra=n%10;
        if(pozitia%2!=0){
            n_final=n_final*10+cifra;
        }
        n=n/10;
    }
    cout << n_final;
    return 0;
}
