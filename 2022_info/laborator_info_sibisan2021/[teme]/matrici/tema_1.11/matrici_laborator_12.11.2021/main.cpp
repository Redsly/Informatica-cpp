#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int a[20][20], prim, n, ogl=0, s=0;
    ifstream fin("numere.txt");
    fin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            fin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout <<a[i][j]<<"\t";
        }
        cout << endl;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i<j && i+j<n-1){
                prim=1;
                if(a[i][j]==0 || a[i][j]==1){
                    prim=0;
                }else{
                    for(int d=2;d*d<a[i][j];d++){
                        if(a[i][j]%d==0){
                            prim=0;
                        }
                    }
                }
                if(prim==1){
                    s=s+a[i][j];                }
            }
        }
    }
    cout << "Suma numerelor prime din nord este "<<s<<"\n";
    int aux=s;
    while(aux!=0){
        ogl=ogl*10+aux;
        aux=aux/10;
    }
    if(ogl==s){
        cout << "Suma e numar palindrom";
    }else{
        cout << "Suma nu e numar palndrom";
    }
    return 0;
}
