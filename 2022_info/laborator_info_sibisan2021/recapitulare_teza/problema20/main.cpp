#include <iostream>

using namespace std;

int v[10],min_nr=99;
int main()
{
    int n,c;
    cout << "n= ";
    cin>>n;
    while(n){
        c=n%10;
        n=n/10;
        v[c]++;
    }
    int k=1;
    for(int i=0;i<10;i++){
        k=1;
        for(int j=i;j<10;j++){
            if(v[i]==k){
                cout << i<<"\t";
            }
            k++;
        }
    }
    return 0;
}
