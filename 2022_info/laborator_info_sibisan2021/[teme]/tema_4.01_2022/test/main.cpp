#include <iostream>

using namespace std;

int main()
{
    int n, c, s=0, p;
    cin>>n;
    while(n>0){
        c=n%10;
        if(c%2==0){
            p=1;
            for(int i=2;i<=c;i++){
                p=p*i;
            }
            s=s+p;
        }
        n=n/10;
    }
    return s;
}
