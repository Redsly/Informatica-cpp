#include <iostream>

using namespace std;

int main()
{
    int n,v[10];
    cout << "n=";
    cin>>n;
    for(int i=0;i<n;i++){
        cout <<"v["<<i<<"]=";
        cin>>v[i];
    }
    for(int i=0;i<n;i++){
        cout << v[i]<<" 0\t";
    }
    return 0;
}
