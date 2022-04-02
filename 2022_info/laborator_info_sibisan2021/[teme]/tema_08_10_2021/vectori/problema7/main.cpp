#include <iostream>

using namespace std;

int main()
{
    int n, v[10], ma=0, nr_nenule=0, s=0;
    cout << "n=";
    cin>>n;
    for(int i=0;i<n;i++){
        cout << "v["<<i<<"]=";
        cin>>v[i];
    }
    for(int i=0;i<n;i++){
        if(v[i]>0){
            nr_nenule++;
            s=s+v[i];
        }
    }
    ma=s/nr_nenule;
    for(int i=0;i<n;i++){
        if(v[i]>0){
            cout << v[i]<<"\t";
        }
        else{
            cout << ma<<"\t";
        }
    }
    return 0;
}
