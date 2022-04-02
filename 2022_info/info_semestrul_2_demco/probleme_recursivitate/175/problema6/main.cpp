#include <iostream>
#include <fstream>
using namespace std;
int Cmax(long int nr, int c_max){
    if(nr!=0){
        if((nr%10)>c_max){
            c_max=nr%10;
        }
        return Cmax(nr/10,c_max);
    }else{
        return c_max;
    }
}
int delcif(int x, int c, int nr, int p){
    if(x>0){
        if((x%10)!=c){
            nr=nr+p*(x%10);
            p*=10;
        }
        return delcif(x/10,c,nr,p);
    }else{
        return nr;
    }
}
void S(long int v[100], int n, int i){
    int cifra_max=0, nr_sch;
    if(i<n){
        cifra_max=Cmax(v[i],0);
        nr_sch=delcif(v[i],cifra_max,0,1);
        v[i]=nr_sch;
        S(v,n,++i);
    }
}
int main()
{
    ifstream fin("numere.int");
    int n;
    long int v[100];
    fin>>n;
    for(int i=0;i<n;i++){
        fin>>v[i];
    }
    S(v,n,0);
    for(int i=0;i<n;i++){
        cout << v[i]<<" ";
    }
    return 0;
}
