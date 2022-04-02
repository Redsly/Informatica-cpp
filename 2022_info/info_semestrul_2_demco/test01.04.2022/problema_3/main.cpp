#include <iostream>

using namespace std;

void M(int mat[100][100],int n, int i, int j, int ct_t){
    if(i<n){
        if(j<n){
            mat[i][j]=T(ct_t)   ;
            M(mat,n,i,++j, ++ct_t);
        }
        else{
            M(mat,n,++i,j,ct_t);
        }
    }
}
int main()
{
    int mat[100][100], n;
    cin>>n;
    M(mat,n,0,0,0);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << mat[i][j]<<" ";
        }
        cout << endl;
    }
    return 0;
}
