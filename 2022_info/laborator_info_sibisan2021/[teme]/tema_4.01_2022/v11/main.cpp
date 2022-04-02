#include <iostream>

using namespace std;
int sum(int a){
    int p=1, s=1;
    for(int d=2;d<=a/2;d++){
        if(a%d==0){
            s=s+d;
        }
    }
    return s;
}
int main()
{
    int n, nr;
    cout <<"n=";
    cin>>n;
    for(int i=0;i<n;i++){
        cout <<"Numarul "<<i<<" = ";
        cin>>nr;
        if(sum(nr)==1){
            cout << nr;
        }
    }
    return 0;
}
