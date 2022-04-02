#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int n, m,a[20][20],b[20][20];
    cout << "m=";
    cin>>m;
    cout << "n=";
    cin>>n;
    ifstream fin("numere.txt");
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            fin>>a[i][j];
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            b[i][j]=a[j][i];
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cout <<b[i][j]<<"\t";
        }
        cout << endl;
    }
    return 0;
}
