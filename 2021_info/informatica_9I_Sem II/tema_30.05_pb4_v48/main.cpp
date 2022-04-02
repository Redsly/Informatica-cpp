#include <iostream>
#include <fstream>
using namespace std;
int fr[15];
int main()
{
    int n,a[15],b[15], m,j=0, intr_schimb;
    ifstream in("bac.in");
    ofstream out("bac.out");
    in>>n;
    for(int i=0;i<n;i++){
        in>>a[i];
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
    m=n;
    do{
        intr_schimb=0;
        for(int i=1; i<=m-1;i++){
            intr_schimb=0;
            if(b[i]>b[i+1]){
                swap(b[i], b[i+1]);
                intr_schimb=1;
            }
        }
        m--;
    }while(intr_schimb);
    for(int i=3;i<j+2;i++)
        out<<b[i]<<" ";
    return 0;
}
