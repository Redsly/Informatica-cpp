#include <iostream>

using namespace std;

int main()
{
    int i, n, a[100], b[100];
    cout << "n= ";
    cin >> n;
    for(i=0; i<n; i++){
        cout << "a["<<i+1<<"]= ";
        cin >> a[i];
    }
    for(i=0;i<n;i++){
        b[i]=a[i];
    }
    for(i=0;i<n;i++){
        cout << b[i]<<" ";
    }
    return 0;
}
