#include <iostream>

using namespace std;

int main()
{
    int n, c;
    cout << "n=";
    cin>>n;
    while(n){
        c=n%10;
        if(c%2==0){
            cout << c<<",";
        }
        n=n/10;
    }
    return 0;
}
