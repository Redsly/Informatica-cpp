#include <iostream>

using namespace std;

int main()
{
    int n, v[10], ct_poz=0, maxim_poz=0,j;
    cout << "n=";
    cin>>n;
    for(int i=0;i<n;i++){
        cout << "v["<<i<<"]=";
        cin>>v[i];
    }
    for(int i=0;i<n;i++){
        if(v[i]>=0){
            ct_poz++;
        }
        if(v[i]<0){
            if(ct_poz>maxim_poz){
                maxim_poz=ct_poz;
                j=i;
            }
            ct_poz=0;
        }
    }
    for(int i=j-maxim_poz; i<j;i++){
        cout << v[i]<<"\t";
    }
    return 0;
}
