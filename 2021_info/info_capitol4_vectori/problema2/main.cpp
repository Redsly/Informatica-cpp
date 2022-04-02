#include <iostream>

using namespace std;

int main()
{
    int n, a[10]={0}, c;
    cin>>n;
    while(n){
        c=n%10;
        a[c]++;
        n=n/10;
    }
    for(int i=10;i>0;i--){
        if(a[i]!=0){
            cout<< i;
        }
        if(a[i]>=2){
            for(int m=a[i]-1; m>0;m--){
                cout << i;
            }
        }
    }
    cout<<endl;
    for(int i=10;i>0;i--){
        if(a[i]!=0){
            cout<< i;
        }
    }
    return 0;
}
