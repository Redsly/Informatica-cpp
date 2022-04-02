#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int n, a[10],i=0,m, nr;
    ifstream in("numere.in");
    in>>n;
    for(int i=0;i<n;i++){
        in>>a[i];
    }
    m=n/2;
    nr=a[0];
    for(int i=0;i<m;i++){
        a[i-1]=a[i];
    }
    a[m-1]=nr;
    nr=a[n-1];
    for(int i=n-2;i>=m;i--){
        a[i+1]=a[i];
    }
    a[m]=nr;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

    return 0;
}
