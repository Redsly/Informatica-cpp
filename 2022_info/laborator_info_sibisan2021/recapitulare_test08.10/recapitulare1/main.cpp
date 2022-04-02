#include <iostream>
#include <cmath>
using namespace std;
///problema20
int main()
{
    int n, prim, nr[2]={0}, d, j=0;
    cout << "N = ";
    cin>>n;
    for(int i=n-1;i>0;i--){
        prim=1;
        for(int d=2;d<sqrt(i);d++){
            if(i%d==0){
                prim=0;
            }
        }
        if(prim==1){
            nr[j]=i;
            j++;
        }
        if(j==2){
            break;
        }
    }
    for(int i=j-1;i>=0;i--){
        cout << nr[i]<<"\t";
    }
    return 0;
}
