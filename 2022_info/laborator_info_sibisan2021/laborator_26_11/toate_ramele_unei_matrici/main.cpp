#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int n,m,mat[20][20];
    ifstream fin("alina.sad");
    fin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            fin>>mat[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<mat[i][j]<<"\t";
        }
        cout <<endl;
    }
    cout <<endl;
    int l;
    if(n<m){
        l=n/2+1;
    }else{
        l=m/2+1;
    }
    if(n>m){
        for(int k=0;k<l;k++){
            for(int j=k;j<=m-1-k;j++){
                cout << mat[k][j]<<"\t";
            }
            for(int i=1+k;i<=n-1-k;i++){
                cout << mat[i][m-1-k]<<"\t";
            }
            if(k<m+1-k &&k<n+1-k){
                for(int j=m-2-k;j>=k;j--){
                    cout << mat[n-1-k][j]<<"\t";
                }
                for(int i=n-2-k;i>=k+1;i--){
                    cout << mat[i][k]<<"\t";
                }
                cout << endl;
            }
        }
    }else{
        for(int k=0;k<l;k++){
            for(int j=k;j<=m-1-k;j++){
                cout << mat[k][j]<<"\t";
            }
            for(int i=1+k;i<=n-1-k;i++){
                cout << mat[i][m-1-k]<<"\t";
            }
            if(k<m+1-k &&k<n+1-k){
                for(int j=m-2-k;j>=k;j--){
                    cout << mat[n-1-k][j]<<"\t";
                }
                for(int i=n-1-k;i>=k+1;i--){
                    cout << mat[i][k]<<"\t";
                }
                cout << endl;
            }
        }
    }
    return 0;
}
