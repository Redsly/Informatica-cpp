#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int n, nr5, poz=1, poz5=0;
    ifstream in("numere.in");
    while(!in.eof()){
        in>>n;
        if(n%5==0){
            poz5=poz;
            nr5=n;
        }
        poz++;
    }
    cout << nr5<<" "<<poz5;
    return 0;
}
