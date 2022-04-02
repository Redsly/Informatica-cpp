#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int x, y, z,n;
    ifstream in("numere.in");
    ofstream out("numere.out");
    x=y=z=1000000000;
    while(!in.eof()&&n!=0){
        in>>n;
        if(n%3==0){
            if(n<x){;
                z=y;
                y=x;
                x=n;
            }
            if(n>x&&n<y){
                z=y;
                y=n;
            }
            if(n>y&&n<z){
                z=n;
            }
        }
    }
    cout <<x<<" "<<y<<" "<<z;
    return 0;
}
