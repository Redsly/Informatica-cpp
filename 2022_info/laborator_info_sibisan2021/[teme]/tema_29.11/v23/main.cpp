#include <iostream>

using namespace std;

int main()
{
    int n,m, a[20][20];
    cout << "m=";
    cin>>m;
    cout << "n=";
    cin>>n;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            if(i==1 || j==1){
                if(i==1){
                    a[i][j]==j;
                }
                if(j==1){
                    a[i][j]=i;
                }
            }else{
                a[i][j]=a[i-1][j]+a[i][j-1];
            }
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
