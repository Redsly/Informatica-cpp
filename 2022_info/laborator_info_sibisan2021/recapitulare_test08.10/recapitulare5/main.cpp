#include <iostream>
///problema9
using namespace std;

int main()
{
    int n;
    double  v[10];
    cout<<"n=";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"v["<<i<<"]=";
        cin>>v[i];
    }
    for(int i=0;i<=n/2;i++){
        if((int)(v[i])==(int)(v[n-1-i])){
            cout <<v[i]<<"\t"<<v[n-1-i]<<endl;
        }
    }
    return 0;
}
