#include <iostream>

using namespace std;

int main()
{
    int i, n, k, a[10]={1,2,3,4,5,6,7,8,9};
    cout << "n= ";
    cin >> n;
    cout << "k= ";
    cin >> k;
    for(i=k-1;i<n-1;i++){
        a[i]=a[i+1];
    }
    for(i=0;i<n-1;i++){
        cout << a[i]<<" ";
    }
    return 0;
}
