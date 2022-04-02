#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int n, a[20][20], v[10]={1,1,1,1,1,1,1,1,1,1};
    cout << "n=";
    cin>>n;
    ifstream fin("alina.sad");
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            fin>>a[i][j];
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            v[j]=v[j]*a[i][j];
        }
    }

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(a[i][j]*a[i][j]==v[j] && a[i][j]!=0){
                cout << a[i][j]<<"\t";
            }
        }
    }
    return 0;
}
