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
void interc(int mat[100][100],int n, int x, int y){
    for(int i=0;i<n;i++){
        int aux=mat[i][x];
        mat[i][x]=mat[i][y];
        mat[i][y]=aux;
    }
}
void sortare(int mat[100][100],int n, int m){
    int sch=1;
    do{
        sch=1;
        for(int i=0;i<m;i++){
            if(mat[n-1][i]>mat[n-1][i+1]){
                interc(mat,n,i,i+1);
            }
        }
    }
}
int main()
{

    return 0;
}
