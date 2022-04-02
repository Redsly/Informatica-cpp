#include <iostream>

using namespace std;

int main()
{
    int n, v[10], a,b,rest, cmmdc[10]={0},c;
    cout <<"n=";
    cin>>n;
    for(int i=0;i<n;i++){
        cout << "Numarul "<<i<<"= ";
        cin>> v[i];
    }
    for(int i=0;i<n;i++){
        a=v[i];
        b=v[i+1];
        while(b!=a){
            if(a>b){
                a=a-b;
            }else{
                b=b-a;
            }
        }
        cmmdc[i]=b;

    }
    for(int i=0;i<n;i++){
        if(cmmdc[i]==cmmdc[i+1]){
            c=cmmdc[i];
        }
    }
    cout << "cmmdc= "<<c;
    return 0;
}
