#include <iostream>

using namespace std;
int extraprim(int a){
    int s=0, d,p;
    d=2;
    do{
        p=0;
        while(a%d==0){
            a/=d;
            p++;
        }
        if(p!=0){
            s+=p;
        }
        d++;
    }while(a!=1);
    return s;
}
int main()
{
    int n, aux, ct=0, nr, ex_prim=1, v[3];
    cin>>n;
    if(s_exp(n)==1){
        aux=n;
        while(aux){
            v[ct]=aux%10;
            aux/=10;
            ct++;
        }
        for(int i=0;i<ct;i++){
            int gasit=0;
            nr=
        }
    }
    return 0;
}
