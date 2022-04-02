#include <iostream>
using namespace std;
int main()
{
    int n=5, v[5];
    for(int i=0;i<n;i++){
        cout<<"v["<<i<<"]=";
        cin>>v[i];
    }
    ///bubble sort
    /*
    int sch=1;
    while(sch){
        sch=0;
        for(int i=0;i<n-1;i++){
            if(v[i]>v[i+1]){
                int aux=v[i];
                v[i]=v[i+1];
                v[i+1]=aux;
                sch=1;
            }
        }
    }*/
    ///numarare
    /*
    int rez[5]={0}, ct[5]={0};
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(v[j]<v[i]){
                ct[i]++;
            }
        }
    }
    for(int i=0;i<n;i++){
        rez[ct[i]]=v[i];
    }
    for(int i=n;i>0;i--){
        cout<<"rez["<<i<<"]="<<rez[i]<<"\t";
    }*/
    ///insertie
    /*
    int aux;
    for(int i=1;i<n;i++){
        aux=v[i];
        int j=i-1;
        while(v[j]>aux && j>=0){
            v[j+1]=v[j];
            j--;
        }
        v[j+1]=aux;
    }
    for(int i=0;i<n;i++){
        cout << v[i]<<"/t";
    }*/
    ///selectie directa
    int pozmax, maxim;
    for(int j=n-1;j>=0;j--){
        maxim=v[0];
        pozmax=0;
        for(int i=0;i<j;i++){
            if(v[i]>maxim){
                maxim=v[i];
                pozmax=i;
            }
        }
        v[pozmax]=v[j];
        v[j]=maxim;
    }
    for(int i=0;i<n;i++){
        cout << v[i]<<"\t";
    }
    return 0;
}
