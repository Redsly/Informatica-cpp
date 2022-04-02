#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream out("bac.out");
    int n;
    cin>>n;
    while(n){
        if(n!=0){
            out<<n<<" ";
            n=n/10;
        }
    }
    return 0;
}
