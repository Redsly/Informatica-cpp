#include <iostream>

using namespace std;


int main()
{
    int a, b,interval[10],j=0;
    cout <<"a=";
    cin>>a;
    cout <<"b=";
    cin>>b;
    for(int i=a;i<=b;i++){
        interval[j]=i;
        j++;
    }
    int prim=0;
    for(int i=0;i<j;i++){
        int d=2;
        while(d<=interval[i]/2){
            if (interval[i]%d!=0){
                prim++;
            }
            d=d+1;
        }
    }
    if (prim){
            cout<<"Da";
        }else{
            cout<<"Nu";
        }
    return 0;
}
