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
void AfisareMatrice(int mat[100][100], int n, int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout << mat[i][j]<<" ";
        }
        cout << endl;
    }
    cout<<endl;

}
int ok(int mat[100][100],int m,int l){
    int sum1=0, sum2=0, ok=1;
    if(mat[l][0]<mat[l][1]){
        sum=mat[l][1]-mat[l][0];
        for(int i=2;i<m;i++){
            if(){
                sum2=mat[l][i]-mat[l][i-1];
            }
            if(sum1!=sum2){
                ok=0;
                break;
            }
            sum1=sum2;
        }
    }
    if(ok==1){
        return 1;
    }else{
        return 0;
    }
}
int program(int mat[100][100],int n, int m){
    for(int i=0;i<n;i++){
        if(ok(mat, m, i)==1){
            cout << i<<" ";
        }
    }

}

int main()
{
    int a[100][100], n,m;
    return 0;
}
