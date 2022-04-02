#include <iostream>

using namespace std;

int main()
{
    int n,nr=7;
    cout << "n=";
    cin>>n;
    int k;
    for(int i=1;i<=n;i++){
        if(i%2!=0){
            k=10;
        }else{
            k=20;
        }
        if(k%6==0){
            k=30;
        }
        nr=nr+k;
    }
    cout << nr;
    return 0;
}
