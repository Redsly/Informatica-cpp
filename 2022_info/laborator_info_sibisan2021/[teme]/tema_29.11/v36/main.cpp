#include <iostream>
#include <fstream>
using namespace std;

int s[10];
int main()
{
    int n,m, a[20][20], v[10]={9999,9999,9999,9999,9999,9999,9999,9999,9999,9999};
    cout << "n=";
    cin>>n;
    cout << "m=";
    cin>>m;
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
    for(int i=1;i<=m;i++){
        cout << v[i]<<"\t";
    }
    return 0;
}
