#include <iostream>

using namespace std;

int main()
{
    int n, a[20][20];
    cout << "n=";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==1 || j==1 || i==n || j==n){
                a[i][j]=i+j;
            }else{
                a[i][j]= a[i-1][j-1]+a[i-1][j]+a[i-1][j+1];
            }
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
