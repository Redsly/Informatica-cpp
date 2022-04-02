#include <iostream>
#include <fstream>
using namespace std;
int nrdiv(int x){
    int d=2;
    int nr=0;
    while(x>1){
        int p=0;
        while(x%d==0){
            x=x/d;
            p++;
        }
        if(p!=0){
            nr++;
        }
        d++;
    }
    return nr;
}
int main()
{
    int n, numar, prima=0, ultima=0;
    ifstream fin("bac.in");
    fin>>n;
    for(int i=0;i<n;i++){
        fin>>numar;
        if(nrdiv(numar)%2==0){
           if(prima==0){
                prima=numar;
           }else{
                ultima=numar;
           }
        }

    }
    cout << prima<<"\t"<<ultima;
    return 0;
}
