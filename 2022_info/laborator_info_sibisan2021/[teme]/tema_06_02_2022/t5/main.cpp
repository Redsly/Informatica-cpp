#include <iostream>

using namespace std;
int identice(int n){
    int c, precedenta, gasit=1;
    precedenta=n%10;
    n/=10;
    while(n && gasit==1){
        c=n%10;
        n/=10;
        if(precedenta!=c){
            gasit=0;
        }
        precedenta=c;
    }
    if(gasit==1){
        return 1;
    }else{
        return 0;
    }
}
int main()
{
    int n;
    cin>>n;
    cout << identice(n)
    return 0;
}
