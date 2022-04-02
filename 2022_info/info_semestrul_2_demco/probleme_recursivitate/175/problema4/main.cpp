#include <iostream>
#include <fstream>
using namespace std;
int p(int nr, int prod){
    if(nr!=0){
        if((nr%10)%2!=0){
            prod=prod*(nr%10);
        }
        return p(nr/10,prod);
    }else{
        return prod;
    }
}
void del(int v[100], int n, int j, int i, int k, int prod_max){
    if(j<n){
        int prod=p(v[j],1);
        if(prod>prod_max){
            prod_max=prod;
            i=j;
        }
        cout <<v[j]<<" "<<prod<<""<<j<<" "<<i<<" "<<prod_max<<endl;
        del(v,n,++j,i,0,prod_max);
    }
    else{
        if(k<n){
            if(i==k && k>i){
                int aux=v[k];
                v[k]=v[k+1];
                v[k+1]=aux;
            }
            cout <<k<<" "<<i<<endl;
            del(v,n,n+1,i,++k,prod_max);
        }
    }
}
int main()
{
    int n, v[100];
    ifstream fin("numere.txt");
    cin>>n;
    for(int i=0;i<n;i++){
        fin>>v[i];
    }
    del(v,n,0,0,0,0);
    for(int i=0;i<n-1;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}
