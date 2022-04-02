#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int a, b, n, r, i;
    ifstream in("numere.in");
    ofstream out("numere.out");
    in>>n;
    while(n){
        in>>a;
        in>>b;
        i=a*b;
        while(b!=0){
            r=a%b;
            a=b;
            b=r;
        }
        cout<<a<<" "<<i/a<<endl;
        n--;
    }
    return 0;
}
