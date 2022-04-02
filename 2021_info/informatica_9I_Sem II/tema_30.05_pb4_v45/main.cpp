#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int n,m, a[10], intr_schimb=1;
    ifstream in("numere.txt");
    in>>n;
    for(int i=0;i<n;i++){
        in>>a[i];
    }
    m=n;
    do{
        intr_schimb=0;
        for(int i=0; i<=m-1;i++){
            intr_schimb=0;
            if(a[i]>a[i+1]){
                swap(a[i], a[i+1]);
                intr_schimb=1;
            }
        }
        m--;
    }while(intr_schimb!=0);
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    return 0;
}
