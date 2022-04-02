#include <iostream>
#include <cmath>
using namespace std;
int nr, p=1, d;
int prim(nr){
    if(nr<2){
        p=0;
    }
    for(d=2;d<sqrt(nr);d++){
        if(nr%d==0){
            p=0;
        }
    }
    return p;
}


int main()
{
    cin>>nr;
    cout <<prim(nr);
    return 0;
}
