#include <iostream>

using namespace std;

int main()
{
    int n, a[20][20];
    cout << "n=";
    cin>>n;
    int v[10];
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            a[i][j]=(i*j)%10;
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout << a[i][j]<<"\t";
        }
        cout << endl;
    }
    return 0;
}
