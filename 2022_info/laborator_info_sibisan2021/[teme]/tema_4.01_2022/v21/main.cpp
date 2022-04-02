///problema 3
#include <iostream>

using namespace std;
int i_prim(int n){
    int p1=20;
    int p2=20;
    int dif, gasit=0, prim;
    while(gasit==0){
        p1--;
        prim=1;
        for(int d=2;d*d<=p1;d++){
            if(p1%d==0){
                prim=0;
            }
        }
        if(prim==1){
            gasit=1;
        }
    }
    gasit=0;
    while(gasit==0){
        p2++;
        prim=1;
        for(int d=2;d*d<=p2;d++){
            if(p2%d==0){
                prim=0;
            }
        }
        if(prim==1){
            gasit=1;
        }
    }
    dif=p2-p1;
    return dif;
}
int main()
{
    int a;
    cout << "a=";
    cin>>a;
    cout <<i_prim(a);
    return 0;
}
