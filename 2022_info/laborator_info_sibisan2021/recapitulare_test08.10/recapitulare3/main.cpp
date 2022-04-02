#include <iostream>
using namespace std;
int main()
{
    int n, v[10]={0}, c, gasit=1;
    cout << "n=";
    cin>>n;
    while(n){
        c=n%10;
        v[c]++;
        n=n/10;
    }
    for(int i=9;i>=0 && gasit==1;i--){
        if(v[i]!=0){
            cout << i<<" apare de "<<v[i];
            gasit=0;
        }
    }
    return 0;
}
