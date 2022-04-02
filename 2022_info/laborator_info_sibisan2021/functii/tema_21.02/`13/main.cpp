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
int Nr(int mat[100][100], int n, int m, int x, int y, int c){
    int ct=0;
    for(int i=0;i<n;i++){
        if(mat[i][c]<x && mat[i][c]>y){
            ct++;
        }
    }
    return ct;
}
void Det(int mat[100][100], int n, int m, int x, int y){
    for(int i=0;i<m;i++){
        if(Nr(mat, n,m,x,y,i)!=0){
            cout << i<<" ";
        }
    }
}
int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
