#include <iostream>

using namespace std;

int main()
{
    int i,n,m,a[100],b[100],c[200];
    cout<<"n= ";
    cin>>n;
    cout <<"m= ";
    cin>>m;
    for(i=0;i<n;i++){
        cout << "a["<<i+1<<"]= ";
        cin >> a[i];
    }
    for(i=0;i<m;i++){
        cout << "b["<<i+1<<"]= ";
        cin >> b[i];
    }
    for(i=0;i<n;i++){
        c[i]=a[i];
    }
    for(i=0;i<m;i++){
        c[n+1]=b[i];
    }
    for(i=0;i<n+m;i++){
        cout <<c[i]<<" ";
    }
    return 0;
}
