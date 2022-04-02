#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int n,x;
    ifstream in("numere.in");
    in>>n;
    x=n;
    cout << n<<" ";
    while(!in.eof()){
        in>>n;
        if(x!=n){
            cout<<n<<" ";
        }
        x=n;
    }
    return 0;
}
