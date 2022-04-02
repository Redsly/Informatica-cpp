#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream in("bac.txt");
    int n=0,a[20], nr,j;
    while(!in.eof()){
        in>>a[n];
        n++;
    }
    for(int i=0;i<n;i++){
        nr=0;
        j=i+1;
        while(a[i]==a[j]){
            nr++;
            j++;
        }
        cout<<a[i]<<" "<<nr<<" ";
    }
    return 0;
}
