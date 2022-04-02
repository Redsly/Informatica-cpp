#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int a, b, n,nr, s, c;
    ofstream out("bac.out");
    cin>>a;
    cin>>b;
    n=a;
    while(n<=b){
        nr=n;
        s=0;
        while(nr){
            c=nr%10;
            nr=nr/10;
            s=s+c;
        }
        if(n%s==n/s){
            out<< n<<" ";
        }
        n++;
    }
    return 0;
}
