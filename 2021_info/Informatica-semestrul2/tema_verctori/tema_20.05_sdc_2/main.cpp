#include <iostream>

using namespace std;

int main()
{
    const int DIM=50;
    int i,n,x,y,k,a[DIM];
    cout << "n= ";cin>>n;
    cout << "x= ";cin>>x;
    cout << "y= ";cin>>y;
    for(i=0;i<n;i++){
        cout << "a["<<i+1<<"]= ";
        cin >> a[i];
    }
    //(i=0;i<n && a[i]!=x;i++)
    if(i!=n){
        k=i;
        if(n+1<=DIM){
            for(i=n;i<k;i--){
                a[i]=a[i-1];
            }
            a[k]=y;
            for(i=0;i<n+1;i++){
                cout << a[i]<<" ";
            }
        }else{
            for(i=n-1;i<k;i--){
                a[i]=a[i-1];
            }
            a[k]=y;
            for(i=0;i<n;i++){
                cout << a[i]<<" ";
            }
        }
    }else{
        cout << "nu s-a gasit elementul";
    }
    return 0;
}
