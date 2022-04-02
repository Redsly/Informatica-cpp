#include <iostream>

using namespace std;

int del(int x, int y){
    int nr=0, c;
    while(x){
        c=x%10;
        x/=10;
        if(c<=y){
            nr=nr*10+c;
        }
    }
    if(nr==0){
        return -1;
    }
    else{
        while(nr){
            x=x*10+nr%10;
            nr/=10;
        }
        return x;
    }
}
int main()
{
    int a,b;
    cout << "a=";
    cin>>a;
    cout << "b=";
    cin>>b;
    cout<<del(a,b);
    return 0;
}
