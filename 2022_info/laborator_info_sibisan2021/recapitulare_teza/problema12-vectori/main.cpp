#include <iostream>

using namespace std;

int a[10];
int main()
{
    int n;
    int v[10];
    cout << "n=";
    cin>>n;
    for(int i=0;i<n;i++){
        cout <<"v["<<i<<"]=";
        cin>>v[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(v[i]==v[j]){
                a[i]++;
            }
        }
    }
    int maxim=0, nr;
    for(int i=0;i<n;i++){
        if(maxim<a[i]){
            maxim=a[i];
            nr=v[i];
        }
    }
    cout<<nr<<"\t"<<maxim;
    return 0;
}
