#include <iostream>

using namespace std;

int main()
{
    int n, v[10], max_v=0, ct_nr=1;
    cout << "n=";
    cin>>n;
    for(int i=0;i<n;i++){
        cout << "v["<<i<<"]=";
        cin>>v[i];
        if(max_v<v[i]){
            max_v=v[i];
            ct_nr=1;
        }else{
            ct_nr++;
        }
    }
    cout << "Numarul "<<max_v<<" apare de "<<ct_nr<<" ori";
    return 0;
}
