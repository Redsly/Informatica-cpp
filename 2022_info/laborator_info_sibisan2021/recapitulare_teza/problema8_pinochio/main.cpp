#include <iostream>

using namespace std;

int main()
{
    int n, p, k;
    cout << "n=";
    cin>>n;
    cout << "p=";
    cin>>p;
    cout << "k=";
    cin>>k;
    for(int i=1;i<=k;i++){
        if(i%6==0 || i%7==0){
            n=n-1;
        }else{
            n=n+p;
        }
    }
    cout << n;
    return 0;
}
