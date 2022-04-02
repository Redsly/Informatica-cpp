#include <iostream>

using namespace std;

int main()
{
    int n, v[10], i=0;
    cout << "n=";
    cin>>n;
    for(int i=0;i<n;i++){
        cout << "v["<<i<<"]=";
        cin>>v[i];
    }
    while(i<n){
        for(int j=n-1;j>=i;j--){
            v[j+1]=v[j];
            v[j]=0;
        }
        n++;
        i+=2;
    }
    for(int i=1;i<n+1;i++){
        cout << v[i]<<"\t";
    }
    return 0;
}
