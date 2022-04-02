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

int maxim_l(int mat[100][100], int m,int linie){
    int maxim=0;
    for(int i=0;i<m;i++){
        if(maxim<mat[linie-1][i]){
            maxim=mat[linie-1][i];
        }
    }
    return maxim;
}
int minim_l(int mat[100][100], int m,int linie){
    int minim=mat[linie][0];
    for(int i=0;i<m;i++){
        if(minim(mat[linie-1][i])){
            minim=mat[linie-1][i];
        }
    }
    return minim;
}
int maxim_c(int mat[100][100], int n,int coloana){
    int maxim=0;
    for(int i=0;i<n;i++){
        if(maxim<mat[i][coloana-1]){
            maxim=mat[i][coloana-1];
        }
    }
    return maxim;
}
int minim_c(int mat[100][100], int n,int coloana){
    int minim=mat[0][coloana-1];
    for(int i=1;i<n;i++){
        if(minim>mat[i][coloana-1]){
            minim=mat[i][coloana-1];
        }
    }
    return minim;
}
int punctSA(int a[100][100], int n, int m, int l, int c){
///returneaza 1 daca a[l][c] este punct sa si 0 alftel.
    if((a[l][c]==minim_l(a,m,l) && a[l][c]==maxim_c(a,n,c)) || (a[l][c]==maxim_l(a,m,l) && a[l][c]==minim_c(a,n,c))){
        return 1;
    }else{
        return 0;
    }
}

int main()
{
    int a[100][100], n,m,l,c;
    cout <<"Linie = ";
    cin>> l;
    cout <<"Coloana = ";
    cin>> c;
    CitireMatrice(a,n,m);
    AfisareMatrice(a,n,m);
    cout<< maxim_l(a, m, l)<<endl;
    cout<< minim_l(a, m, l)<<endl;
    cout<< maxim_c(a, n, c)<<endl;
    cout<< minim_c(a, n, c)<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(punctSA(a,n,m,i,j)==1){
                cout << a[i][j]<<" ";
            }
        }
    }
    return 0;
}
