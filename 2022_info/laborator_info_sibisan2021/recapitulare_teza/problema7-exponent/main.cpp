#include <iostream>

using namespace std;

int main()
{   int n, k, produs, exponent=0;
    cout << "n=";
    cin>>n;
    cout <<"k=";
    cin>>k;
    for(int i=1;i<=n;i++){
        if(i%k==0){
            exponent++;
        }
    }
    cout << exponent;
    return 0;
}
