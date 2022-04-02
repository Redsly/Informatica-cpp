#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int a[20][20], prim, n, ogl=0, s=0, suma_nr=0;
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
            if(i+j>n-1 && i>j){
                s=0;
                for(int d=1;d<a[i][j];d++){
                    if(a[i][j]%d==0){
                        s+=d;
                    }
                }
                if(s==a[i][j]){
                    suma_nr=suma_nr+s;
                }
            }
        }
    }
    cout << "Suma numerelor prime din sud este "<<suma_nr<<"\n";
    prim=1;
    if(suma_nr==0 || suma_nr==1){
        prim=0;
    }else{
        for(int d=2;d*d<suma_nr; d++){
            if(suma_nr%d==0){
                prim=0;
            }
        }
    }
    if(prim==1){
        cout <<"Suma nr perf din S este un nr prim";
    }else{
        cout <<"Suma nr perf din S nu este nr prim";
    }
    return 0;
}
