#include <iostream>

using namespace std;

int main()
{
    int n,v[10],nr1=0, nr2=0;
    cout << "n=";
    cin>>n;
    for(int i=0;i<n;i++){
        cout <<"v["<<i<<"]=";
        cin>>v[i];
        nr1=nr1*10+v[i];
    }
    n=nr1;
    while(n){
        nr2=nr2*10+n%10;
        n=n/10;
    }
    cout <<nr1+nr2;
    return 0;
}
