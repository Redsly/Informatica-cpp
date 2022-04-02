#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int a, b, nr, n, c, b_c, verificare=0, sf_n;
    ofstream out("bac.out");
    cin>>a;
    cin>>b;
    nr=a;
    while(nr<=b){
        n=nr;
        verificare=0;
        c=n%10;
        n=n/10;
        b_c=c;
        sf_n=0;
        if(n<10){
            verificare=1;
        }
        while(n){
            c=n%10;
            n=n/10;
            if(b_c==c){
                verificare++;
                if(n==0){
                    sf_n=1;
                }
            }
            b_c=c;
        }
        if(verificare>=2 && sf_n==1){
            cout << nr<<" ";
        }
        nr++;
    }
    return 0;
}
