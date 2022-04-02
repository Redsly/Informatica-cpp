#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    int prim=1;
    for(int i=0;i<256;i++){
        int nr=rand();
        prim(m);
        prim=1;
        if(nr==0 || nr==1){
            prim=0;
        }
        for(int d=2;d<nr/2;d++){
            if(nr%d==0){
                prim=0;
            }
        }
        if(prim==1){
            cout << "Numarul "<<nr<< " este prim."<<endl;
        }else{
            cout << "Numarul "<<nr<< " nu este prim"<<endl;
        }
    }
    return prim;
}
