#include <iostream>

using namespace std;

int main()
{
    int i, n, m, a[100], b[100], c[100];
    cout<<"n= ";
    cin>>n;
    cout << "m= ";
    cin>>m;
    for(i=0;i<n;i++){
        cout << "a["<<i+1<<"]= ";
        cin >> a[i];
    }
    for(i-0;i<m;i++){
        b[i]=a[i];
    }
    for(i=m;i<n;i++){
        c[i-m]=a[i];
    }
    for(i=0;i<m;i++){
        cout << b[i]<<" ";
    }
    for(i=0;i<n-m;i++){
        cout << c[i]<<" ";
    }
    return 0;
}
