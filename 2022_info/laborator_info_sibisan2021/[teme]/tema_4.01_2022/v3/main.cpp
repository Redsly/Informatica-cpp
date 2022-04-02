#include <iostream>

using namespace std;
int cif(int a, int b){
    int ct=0;
    while(a){
        if(a%10==b){
            ct++;
        }
        a=a/10;
    }
    return ct;
}
int ap[10];
int main()
{
    int n, nr[7], par=0, pal=0;
    cout <<"n=";
    cin>>n;
    for(int c=0;c<=9 && par==1;c++){
        par=1;
        ap[c]=cif(n,c);
        if(ap[c]%2==0){
            par=0;
        }
    }
    if(par==0){
        cout << 0;
    }
    else{
        for(int c=9;c>=0;c--){
            if(ap[c]!=0){
                for(int i=1;i<=ap[c]/2;i++){
                    pal=pal*10+c;
                }
            }
        }
        for(int c=0;c<=9;c++){
            if(ap[c]!=0){
                for(int i=1;i<=ap[c]/2;i++){
                    pal=pal*10+c;
                }
            }
        }
    }
    return 0;
}
