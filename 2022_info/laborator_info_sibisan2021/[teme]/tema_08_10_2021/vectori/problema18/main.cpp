#include <iostream>

using namespace std;

int main()
{
    int n, v[10], prima_cifra, n1;
    cout << "n=";
    cin>>n;
    n1=n;
    for(int i=0;i<n;i++){
        cout << "v["<<i<<"]=";
        cin>>v[i];
    }
    do{
        prima_cifra=v[0];
        for(int i=1;i<n;i++){
            v[i-1]=v[i];
            cout << v[i-1]<<"\t";
        }
        v[n-1]=prima_cifra;
        cout << v[n-1]<<"\t"<<endl;
        n1--;
    }while(n1>1);
    return 0;
}
