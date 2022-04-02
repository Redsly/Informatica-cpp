#include <iostream>

using namespace std;
int factori(int n, int m){
    int ct_prim=0;
    for(int i=n;i<=m;i++){
        int prim=1;
        if(i<2){
            prim=0;
        }
        for(int d=2;d*d<i;d++){
            if(i%d==0){
                prim=0;
            }
        }
        if(prim==1){
            ct_prim++;
        }
    }
    int d=2;
    cout << n" = "<<endl;
    while(n>1){
        int p=0;
        while(n%d==0){
            n=n/d;
            p++;
        }
        if(p!=0){
            cout <<d<<"la "<<p<<endl;
        }
        d++;
    }
    d=2;
    cout << m" = "<<endl;
    while(n>1){
        int p=0;
        while(n%d==0){
            n=n/d;
            p++;
        }
        if(p!=0){
            cout <<d<<"la "<<p<<endl;
        }
        d++;
    }
    return ct_prim;
}
int main()
{
    int n,m;
    cin>>n>>m;
    cout << factori(n,m);
    return 0;
}
