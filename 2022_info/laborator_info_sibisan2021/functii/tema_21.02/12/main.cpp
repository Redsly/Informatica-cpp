#include <iostream>
#include <fstream>

using namespace std;
ifstream fin("numere.in");
void CitireMatrice(int mat[100][100], int &n){
    fin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            fin>>mat[i][j];
        }
    }
}
void AfisareMatrice(int mat[100][100], int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << mat[i][j]<<" ";
        }
        cout << endl;
    }
    cout<<endl;

}
void MinL(int mat[100][100], int n){
    int minl;
    for(int i=0;i<n;i++){
        minl=mat[i][0];
        for(int j=1;j<n;j++){
            if(minl>mat[i][j]){
                minl=mat[i][j];
            }
        }
        mat[i][j+1]=minl;
    }
}
void MaxC(int mat[100][100], int n){
    int max_c;
    for(int i=0;i<n;i++){
        max_c=0;
        for(int j=1;j<n;j++){
            if(max_c<mat[j][i]){
                max_c=mat[j][i];
            }
        }
        mat[n][i]=max_c;
    }
}
void Scrie(int mat[100][100], int n){
    for(int i=0;i<n;i++){
        if(mat[i][n]==mat[n][i]){
            cout << mat[i][n];
        }
    }
}
int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
