#include <iostream>

using namespace std;

int main()
{
    float a[20][20];
    int n, m, s;
    cout << "n=";
    cin>>n;
    cout <<"m=";
    cin>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout << "a["<<i<<"]["<<j<<"]=";
            cin>> a[i][j];
        }
    }
    for(int i=0;i<n;i++){
        s=0;
        for(int j=0;j<m;j++){
                s=s+a[i][j];
        }
        a[i][m]=s/m;
    }for(int i=0;i<n;i++){
        for(int j=0;j<=m;j++){
            cout <<a[i][j]<<"\t";
        }
        cout <<endl;
    }
    return 0;
}
