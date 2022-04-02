#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream fin("alina.sad");
    int mat[10][10], n, suma;
    fin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            fin>>mat[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<mat[i][j]<<"\t";
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i<j){
                suma=0;
                for(int d=1; d<=mat[i][j]/2;d++){
                    if(mat[i][j]%d==0){
                        suma+=d;
                    }
                }
                if(suma==mat[i][j]){
                    cout << "Numarul perfect este "<<mat[i][j]<<endl;
                }
            }
        }
    }
    return 0;
}
