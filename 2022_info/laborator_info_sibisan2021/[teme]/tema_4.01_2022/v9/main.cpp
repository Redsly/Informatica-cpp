#include <iostream>
///problema 3
using namespace std;

int sub(int n, int k){
    for(int i=n;i>=1;i--){
        cout <<i*k<<"\t";
    }
}
int main()
{
    int n,k;
    cin>>n;
    cin>>k;
    sub(n,k);
    return 0;
}
