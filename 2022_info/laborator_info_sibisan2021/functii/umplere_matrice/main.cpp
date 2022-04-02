#include <iostream>

using namespace std;
void umat(int mat[100][100], int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                mat[i][j]=0;
            }
            else{
                if(i>j){
                    mat[i][j]=j;
                }
                else{
                    mat[i][j]=i;
                }
            }
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
int main()
{
    int n, mat[100][100];
    cin>> n;
    umat(mat, n);
    AfisareMatrice(mat,n);
    return 0;
}
