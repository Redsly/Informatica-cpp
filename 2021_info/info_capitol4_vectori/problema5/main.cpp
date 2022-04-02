#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream in("numere.in");
    int n, v[100]={0},vdpi[100]={0}, vdpf[100]={0}, poz=0;
    while(!in.eof()){
        in>>n;
        v[n]++;
        if(vdpi[n]==0){
            vdpi[n]=poz;
        }
        vdpf[n]=poz;
        poz++;
    }
    for(int i=0;i<100;i++){
        if(v[i]==1){
            cout<<i<<" 0 "<<endl;
        }
        if(v[i]>1){
            cout<<i<<" "<<vdpf[i]-vdpi[i]<<endl;
        }
    }
    return 0;
}
