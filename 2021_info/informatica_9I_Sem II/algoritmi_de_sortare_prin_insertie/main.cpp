#include <iostream>

using namespace std;

int main()
{
    int n=5, a[8]={0, 55, 44, 33, 22, 11}, p,i,x;
    /*cin>>n;
    for(int i=0; i<=n;i++){
        cin>> a[i];
    }*/
    for(int i=2; i<=n; i++){
        x=a[i];
        p=i-1;
        while(p >= 1 && a[p] > x){
            a[p+1]=a[p];
            p--;
        }
        a[p+1]=x;
    }
    cout << "Sirul sortat este este: ";
    for(int i=1; i<=n;i++){
        cout << a[i]<<" ";
    }
    return 0;
}
