#ifndef VECTORI_H_INCLUDED
#define VECTORI_H_INCLUDED

#include <fstream>
using namespace std;
ifstream fin("numere.in");
void CitireVectori(int v[100], int &n){
    fin>>n;
    for(int i=0;i<n;i++){
        fin>>v[i];
    }
}
void AfisareVectori(int v[100], int n){
    for(int i=0;i<n;i++){
        cout << v[i]<<" ";
    }
    cout << endl;
}
void copiaza(int dest[100] , int &ndest , int sursa[100] , int nsursa){
    ndest=nsursa;
    for(int i=0;i<nsursa;i++){
        dest[i]=sursa[i];
    }

}
void BubleSort(int v[100], int n, int ts=1){
    ///Sorteaza vectorul prin metoda bulelor///
    ///v - vectorul de sortat///
    ///n - lungimea vectorului///
    ///ts - tipul de sortare : 1 pentru sortare crescatoare(implicit)///
    ///                        -1 sortate descrescatoare///
    if(ts==1){
        int sch=1;
        while(sch){
            sch=0;
            for(int i=0;i<n-1;i++){
                if(v[i]>v[i+1]){
                    int aux=v[i];
                    v[i]=v[i+1];
                    v[i+1]=aux;
                    sch=1;
                }
            }
        }
    }else{
        int sch=1;
        while(sch){
            sch=0;
            for(int i=0;i<n-1;i++){
                if(v[i]<v[i+1]){
                    int aux=v[i];
                    v[i]=v[i+1];
                    v[i+1]=aux;
                    sch=1;
                }
            }
        }
    }

}


#endif // VECTORI_H_INCLUDED
