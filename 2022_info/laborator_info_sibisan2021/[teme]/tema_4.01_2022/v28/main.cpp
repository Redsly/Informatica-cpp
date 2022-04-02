#include <iostream>
#include <fstream>
using namespace std;
int primul(int a){
    for(int d=2;d*d<a;d++){
        if(a%d==0){
           return d;
        }
    }
    return a;
}
int main()
{
    ifstream fin("numere.in");
    int n, x, m, maxim=0;
    fin>>n;
    for(int i=0;i<n;i++)
    {
        fin>>x;
        m=x/primul(x);
        if(primul(m)==m){
            if(maxim<x){
                maxim=x;
            }
        }
    }
    if(maxim!=0){
        cout<<"Da "<<maxim;
    }else{
        cout << "Nu";
    }
    return 0;
}
