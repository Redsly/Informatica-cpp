#include <iostream>

using namespace std;

int main()
{
    int v[1000], n,i,pin=-1;
    int pfn=-1, pim=-1,pfm=-1, valp;
    int valmaxp;
    cout << "n=";
    cin>>n;
    for(int i=0;i<n;i++){
        cout << "v["<<i<<"]=";
        cin>>v[i];
    }
    for(int i=0;i<n;i++){
        cout << v[i]<<"\t";
    }
    cout <<endl;
    i=0;
    while(v[i]>0 && i<n){
        i++;
    }
    pfn=i;
    valp=pfn-pin-1;
    valmaxp=valp;
    i++;
    while(i<n){
        while(v[i]>0 && i<n){
            i++;
        }
        pin=pfn;
        pfn=i;
        valp=pfn-pin-1;
        if(valp>valmaxp){
            valmaxp=valp;
            pim=pin;
            pfm=pfn;
        }
        i++;
    }
    for(int i=pim+1;i<pfm;i++){
        cout << v[i]<<"\t";
    }
    return 0;
}
