#include <iostream>

using namespace std;

int main()
{
    const int DIM=10;
    int i,n,k,x,a[DIM]={1,2,3,4,5,6,7,8,9};
    cout << "n= ";
    cin >> n;
    cout << "k= ";
    cin >> k;
    cout << "x= ";
    cin >> x;
    if(n+1<=DIM){
        for(i=n;i<k;i--){
            a[i]=a[i-1];
        }
        a[k-1]=x;//a[k]=x;
        for(i=0;i<n+1;i++){
            cout << a[i]<<" ";
        }
    }else{
        for(i=n-1;i<k;i--){
            a[i]=a[i-1];
        }
        a[k]=x;
        for(i=0;i<n;i++){
            cout << a[i]<<" ";
        }
    }
    return 0;
}
