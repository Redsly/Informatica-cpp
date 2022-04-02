#include <iostream>

using namespace std;

int main()
{/*
    int intr_schimb=0, a[10], n;
     cout<<"n=";cin>>n;
    for(int i=0;i<n;i++){
        cout<<"a["<<i<<"]=";
        cin>>a[i];
    }
    for(int i=0;i<n-1;i++){
            intr_schimb=0;
        if(a[i]>a[i+1]){
            swap(a[i], a[i+1]);
            intr_schimb=1;
        }
    }
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    */
    int intr_schimb=0, n, a[100], m;
    cout<<"n=";cin>>n;
    for(int i=0;i<n;i++){
        cout<<"a["<<i<<"]=";
        cin>>a[i];
    }
    m=n;
    do{
        intr_schimb=0;
        for(int i=1; i<=m-1;i++){
            intr_schimb=0;
            if(a[i]>a[i+1]){
                swap(a[i], a[i+1]);
                intr_schimb=1;
            }
        }
        m--;
    }while(intr_schimb);
    for(int i=1;i<n;i++)
        cout<<a[i]<<" ";
    return 0;
}
