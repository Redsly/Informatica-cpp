#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int n,m, a[30][30];
    ifstream fin("numere.txt");
    cout <<"n= ";
    cin>>n;
    cout <<"m= ";
    cin>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            fin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout << a[i][j]<<"\t";
        }
        cout << endl;
    }
    cout <<endl;
    for(int j=0;j<m;j++){
        a[n+1][j]=a[0][j];
    }
    for(int i=1;i<n;i++){
        for(int j=0;j<m;j++){
            a[i-1][j]=a[i][j];
        }
    }
    for(int j=0;j<m;j++){
            a[n-1][j]=a[n+1][j];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout << a[i][j]<<"\t";
        }
        cout << endl;
    }
    return 0;
}
