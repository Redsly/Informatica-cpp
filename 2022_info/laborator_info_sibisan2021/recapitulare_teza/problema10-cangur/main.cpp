#include <iostream>

using namespace std;

int main()
{
    int n, nr=7, p=10, suma=0;
    cout <<"n=";
    cin>>n;
    int nr_prim=nr;
    suma=suma+nr;
    for(int i=2;i<=n;i++){
        nr=nr*10+nr_prim;
        suma=suma+nr;
    }
    cout <<suma;
    return 0;
}
