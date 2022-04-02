#include <iostream>

using namespace std;
int armonie(int n, int m){
    int sn=0, sm=0, snm=n+m;
    for(int d=2;d<n/2;d++){
        if(n%d==0){
            sn+=d;
        }
    }
    for(int d=2;d<m/2;d++){
        if(m%d==0){
            sm+=d;
        }
    }
    if(sn<=snm && sm>=snm){
        return 1;
    }else{
        return 0;
    }
}
int main()
{
    int n=8,m=12;
    cout << armonie(n,m);
    return 0;
}
