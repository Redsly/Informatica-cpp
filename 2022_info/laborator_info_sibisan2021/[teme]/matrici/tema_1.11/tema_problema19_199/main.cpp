#include <iostream>

using namespace std;

int main()
{
    int n, x;
    cout <<"n=";
    cin>>n;
    int m[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << "m["<<i<<"]["<<j<<"]=";
            cin>> m[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(m[i][j]==0 && x==1){
                x=1;
            }else{
                x=0;
            }
        }
    }
    if(x==1){
        cout << "Matrice zero";
    }
    return 0;
}
