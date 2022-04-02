#include <iostream>
#include <fstream>
using namespace std;

int s[10];
int main()
{
    int n,m, a[20][20],produs=1, v[10]={9999,9999,9999,9999,9999,9999,9999,9999,9999,9999};
    cout << "n=";
    cin>>n;
    m=n;
    ifstream fin("numere.txt");
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            fin>>a[i][j];
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(v[j]>a[i][j]){
                v[j]=a[i][j];
            }
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(i+j==n+1){
                if(a[i][j]==v[j]){
                    produs=produs*a[i][j];
                }
            }
        }
    }
    cout << produs%10;
    return 0;
}
