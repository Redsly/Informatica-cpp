#include <iostream>

using namespace std;
int fr[10];
int main()
{
    /*unsigned long n;
    int i,j,a[10],b[10]={0};
    cout << "n= ";
    cin>>n;
    i=0;
    while(n){
        a[i]=n%10;
        n/=10;
        i++;
    }
    for(j=0;j<i;j++){
        b[a[j]]++;
    }
    for(i=0;i<=9;i++){
        if(b[i]){
            cout << "cifra "<<i<<" apare de "<<b[i]<<" ori "<<endl;
        }
    }*/
    long long n,c;
    cout << "n=";cin>>n;
    while(n){
        c=n%10;
        fr[c]++;
        n=n/10;
    }
    for(c=0;c<=9;c++){
        if(fr[c]!=0){
            cout << "cifra "<<c<<" apare de "<<fr[c]<<" ori "<<endl;
        }
    }
    return 0;
}
