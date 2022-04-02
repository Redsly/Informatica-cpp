#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream fin("alina.sad");
    int n, m, mat[10][10];
    fin>>n;
    fin>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            fin>>mat[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<mat[i][j]<<"\t";
        }
        cout<<endl;
    }
    ///minim pe linie
    for(int i=0; i<n;i++){
        int min_l=mat[i][0];
        int c_min=0;
        for(int j=1;j<m;j++){
            if(min_l>mat[i][j]){
                min_l=mat[i][j];
                c_min=j;
            }
        }
        //cout << "Minimul de pe linia "<<i<<" este "<<min_l<<" si se afla pe coloana "<<c_min<<endl;
        int ok=1;
        for(int l=0;l<n;l++){
            if(mat[l][c_min]>min_l){
                ok=0;
            }
        }
        if(ok==1){
            cout<<min_l<<" linia "<<i<<" coloana "<<c_min<<endl;
        }
    }
    ///maxim pe linii
    for(int i=0; i<n;i++){
        int max_l=mat[i][0];
        int c_max=0;
        for(int j=1;j<m;j++){
            if(max_l<mat[i][j]){
                max_l=mat[i][j];
                c_max=j;
            }
        }
        //cout << "Minimul de pe linia "<<i<<" este "<<min_l<<" si se afla pe coloana "<<c_min<<endl;
        int ok=1;
        for(int l=0;l<n;l++){
            if(mat[l][c_max]<max_l){
                ok=0;
            }
        }
        if(ok==1){

            cout<<max_l<<" linia "<<i<<" coloana "<<c_max<<endl;
        }
    }
    return 0;
}
