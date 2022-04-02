#include <iostream>
///problema 3
using namespace std;
void sub(int n, int &a, int &b){
    a=0;
    b=0;
    int prim;
    for(int i=n;i>=2;i--){
        prim=1;
        for(int d=2;d*d<=i;d++){
            if(i%d==0){
                prim=0;
            }
        }
        if(prim==1){
            if(a==0){
                a=i;
            }else{
                if(b==0){
                    b=i;
                }
            }
        }
    }
}
int main()
{
    int n, x,y;
    cin>>n;
    sub(n,x,y);
    cout <<x<<" "<<y;
    return 0;
}
