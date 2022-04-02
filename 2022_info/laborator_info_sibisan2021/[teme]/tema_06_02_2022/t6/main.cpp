#include <iostream>

using namespace std;
void numar(int n, int c, int &m){
    int p=1;
    while(n){
        if(n%10!=c && n%10!=0){
            m=m+(n%10)*10;
            p*=10;
        }
        n/=10;
    }
}
int main()
{
    int n,c;
    cin>>n>>c;
    cout << numar(n,c);
    return 0;
}
