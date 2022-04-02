#include <iostream>
#include <fstream>
using namespace std;
int fr[30];
int a[30];
int main()
{
    int n=0,b[30], m,j=0, intr_schimb;
    int i;
    ifstream in("numere.in");
    in>>a[n];
    while(!in.eof()){
        n++;
        in>>a[n];
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(a[i]==a[j]){
                fr[i]++;
            }
        }
    }
    for(int i=0; i<n;i++){
        if(fr[i]<2){
            b[j]=a[i];
            j++;
        }
    }
    for(int i=0;i<j;i++)
        cout<<b[i]<<" ";
    /*
    m=n;
    do{
        intr_schimb=0;
        for(int i=0; i<=m-1;i++){
            intr_schimb=0;
            if(b[i]>b[i+1]){
                swap(b[i], b[i+1]);
                intr_schimb=1;
            }
        }
        m--;
    }while(intr_schimb);
    for(int i=0;i<j;i++)
        cout<<b[i]<<" ";
    */return 0;

}
