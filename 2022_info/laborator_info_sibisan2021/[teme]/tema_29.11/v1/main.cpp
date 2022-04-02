#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int n,m,a[20][20];
    cout <<"n=";
    cin>>n;
    cout<<"m=";
    cin>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(i>j){
                a[i][j]=j;
            }else{
                a[i][j]=i;
            }
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cout << a[i][j];
        }
        cout <<endl;
    }
    return 0;
}
