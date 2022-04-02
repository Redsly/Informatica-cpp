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
int serpele(int mat[100][100], int n, int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i%2==0){
                cout << mat[i][j]<<" ";
            }else{
                cout << mat[i][m-j-1]<<" ";
            }
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
int main()
{
    int n, m, a[100][100];
    CitireMatrice(a, n,m);
    AfisareMatrice(a,n,m);
    cout <<endl<<"Acesta e serpele matrice: ";
    serpele(a, n,m);
    return 0;
}
