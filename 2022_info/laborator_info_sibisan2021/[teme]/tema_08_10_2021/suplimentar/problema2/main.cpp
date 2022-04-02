#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, k=0, p=0, nr_premiati;
    cout << "n=";
    cin>>n;
    p=sqrt(n);
    k=pow(p,2);
    cout<<k<<endl;
    nr_premiati=n-k;
    cout <<"Numarul de elevi premiati: "<<nr_premiati<<endl<<"Elevi nepremiati: "<<endl;
    while(k){
        for(int i=1;i<=p;i++){
           cout <<k<<" ";
           k--;
        }
        cout <<endl;

    }
    return 0;
}
