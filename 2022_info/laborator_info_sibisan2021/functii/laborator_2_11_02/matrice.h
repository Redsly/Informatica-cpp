#ifndef MATRICE_H_INCLUDED
#define MATRICE_H_INCLUDED


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
void AfisareDP(int mat[100][100], int n, int m){
    if(n==m){
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(i==j){
                    cout << mat[i][j]<<" ";
                }
            }
        }
    }
    else{
        cout << "Nu e matrice patratica";
    }
    cout <<endl;
}
void AfisareDS(int mat[100][100], int n, int m){
    if(n==m){
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(i+j==n-1){
                    cout << mat[i][j]<<" ";
                }
            }
        }
    }
    else{
        cout << "Nu e matrice patratica";
    }
    cout <<endl;
}
void AfisareNORD(int mat[100][100], int n, int m){
    if(n==m){
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(i<j && i+j<n-1){
                    cout << mat[i][j]<<" ";
                }
            }
        }
    }
    else{
        cout << "Nu e matrice patratica";
    }
    cout <<endl;
}
void AfisareSUD(int mat[100][100], int n, int m){
    if(n==m){
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(i>j && i+j>n-1){
                    cout << mat[i][j]<<" ";
                }
            }
        }
    }
    else{
        cout << "Nu e matrice patratica";
    }
    cout <<endl;
}
void AfisareEST(int mat[100][100], int n, int m){
    if(n==m){
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(i<j && i+j>n-1){
                    cout << mat[i][j]<<" ";
                }
            }
        }
    }
    else{
        cout << "Nu e matrice patratica";
    }
    cout <<endl;
}
void AfisareVEST(int mat[100][100], int n, int m){
    if(n==m){
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(i>j && i+j<n-1){
                    cout << mat[i][j]<<" ";
                }
            }
        }
    }
    else{
        cout << "Nu e matrice patratica";
    }
    cout <<endl;
}

void SumaMatrice(int mat1[100][100], int n1, int m1,int mat2[100][100], int n2, int m2,int matr[100][100], int &nr, int &mr){
    if(n1==n2 && m1==m2){
        nr=n1;
        mr=m1;
        for(int i=0;i<nr;i++){
            for(int j=0;j<mr;j++){
                matr[i][j]=mat1[i][j]+mat2[i][j];
            }
        }
    }else{
        nr=0;
        mr=0;
        cout <<"Nu se poate afla suma.";
    }

}
void DiferentaMatrice(int mat1[100][100], int n1, int m1,int mat2[100][100], int n2, int m2,int matr[100][100], int &nr, int &mr){
    if(n1==n2 && m1==m2){
        nr=n1;
        mr=m1;
        for(int i=0;i<nr;i++){
            for(int j=0;j<mr;j++){
                matr[i][j]=mat1[i][j]-mat2[i][j];
            }
        }
    }else{
        nr=0;
        mr=0;
        cout <<"Nu se poate afla diferenta.";
    }

}
void ProdMatrice(int mat1[100][100], int n1, int m1,int mat2[100][100], int n2, int m2,int matr[100][100], int &nr, int &mr){
    if(n1==n2 && m1==m2){
        nr=n1;
        mr=m1;
        for(int i=0;i<nr;i++){
            for(int j=0;j<mr;j++){
                matr[i][j]=mat1[i][j]*mat2[i][j];
            }
        }
    }else{
        nr=0;
        mr=0;
        cout <<"Nu se poate afla produsul.";
    }

}
#endif // MATRICE_H_INCLUDED
