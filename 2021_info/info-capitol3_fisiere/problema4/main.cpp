#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int secventa10=0, max_secventa=0, n, nr;
    ifstream in("numere.in");
    in>>n;
    while(n){
        in>>nr;
        if(nr%10==0){
            secventa10++;
        }else{
            if(max_secventa<secventa10){
                max_secventa=secventa10;
            }
            secventa10=0;
        }
        n--;
    }
    cout << max_secventa;

    return 0;
}
