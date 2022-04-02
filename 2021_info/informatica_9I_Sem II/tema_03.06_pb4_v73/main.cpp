#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int n, a[15],i=0,intr_schimb,m;
    ifstream in("sir.in");
    ofstream out("sir.out");
    while(!in.eof()){
        in>>a[i];
        i++;
    }
    m=i;
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
    for(int i=0;i<n;i++)
        out<<a[i]<<" ";
    return 0;
}
