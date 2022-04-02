#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("numere.in");

void CitireMatrice(int mat[100][100], int &n, int &m){
    fin>>n;
    fin>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            fin>>mat[i][j];
        }
    }
}

int baza(int mat[100][100], int n,int m){
    int max_mat=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(max_mat<mat[i][j]){
                max_mat=mat[i][j];
            }
        }
    }
    return max_mat+1;
}
void conv(int mat[100][100],int n,int m, int b){
    for(int i=0;i<n;i++){
        int n10=0;
        int p=0;
        for(int j=m-1;j>=0;j--){
            n10=n10+mat[i][j]*p;
            p*=b;
        }
        mat[i][m]=n10;
    }
}
void scrie(int mat[100][100], int n,int m){
    for(int i=0;i<n;i++){
        cout<< mat[i][m]<<" ";
    }
}
int main()
{
    int n,m,a[100][100];
    CitireMatrice(a, n,m);
    cout  << baza(a,n,m);
    conv(a,n,m,baza(a,n,m));
    scrie(a,n,m);
    return 0;
}
