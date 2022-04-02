#include <iostream>

using namespace std;

int main()
{
    int n,m, a[20][20], k;
    cout << "m=";
    cin>>m;
    cout << "n=";
    cin>>n;
    k=m*n;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            a[i][j]=k;
            k--;
        }
    }
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            cout << a[i][j]<<"\t";
        }
        cout << endl;
    }
    return 0;
}
