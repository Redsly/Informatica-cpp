#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int a[20][20],n, ogl=0, s=0, suma_nr=0;
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
            if(i+j>n-1 && i<j){
                int aux=a[i][j];
                int ogl=0;
                while(aux!=0){
                    ogl=ogl*10+aux%10;
                    aux/=10;
                }
                if(ogl==a[i][j]){
                    suma_nr=suma_nr+a[i][j];
                }
            }
        }
    }
    cout << "Suma numerelor palindrom din est este "<<suma_nr<<"\n";
    int sd=0;
    for(int d=1;d<=suma_nr/2;d++){
        if(suma_nr%d==0){
            sd+=d;
        }
    }
    if(sd==suma_nr){
        cout<<"Suma e nr perf";
    }else{
        cout<<"Suma nu e nr perf";
    }
    return 0;
}
