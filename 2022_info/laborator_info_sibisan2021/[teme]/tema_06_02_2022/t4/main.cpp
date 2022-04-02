#include <iostream>

using namespace std;
int joc(int n){
    int ct_k=0;
    for(int k=2;k<=n;k++){
        if(n%k==0){
            ct_k++;
        }
    }
    return ct_k;
}
int main()
{
    int n;
    cin>>n;
    cout << joc(n);

    return 0;
}
