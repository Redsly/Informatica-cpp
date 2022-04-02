#include <iostream>

using namespace std;

int main()
{
    //sortare prin insertie
    for(int i=1;i<=n;i++){
        x=a[i];
        j=i-1;
        while(a[j]>x && j>=0){
            a[j+1]=a[j];
            j--;
        }
        a[j]=x;
    }
    //bubble sort
    m=n;
    do{
        intr_schimb=0;
        for(int i=0;i<m;i++){
            if(a[i]>a[i+1]){
                aux=a[i];
                a[i]=a[i+1];
                a[i+1]=aux;
                intr_schimb=0;
            }
        }
        m--;
    }while(intr_schimb);
    //sortarea prin numarare;

    int a[10]; nr_poz[10], fin[10];
    for(int i=0;i<n;i++){
        if(a[i]>a[i+1]){
            nr_poz[i]++;
        }else{
            nr_poz[i+1]++;
        }
    }
    for(int i=0;i<n;i++){
        fin[nr_poz[i]]=a[i];
    }
    //sortarea prin selectie;
    for(int b=0;b<n;b++){
        minim=a[b];
        p=b;
        for(int i=b+1; i<n;i++){
            if(a[i]<minim){
                minim=a[i];
                p=i;
            }
        }
        swap(a[p],a[b]);
    }
    return 0;
}
