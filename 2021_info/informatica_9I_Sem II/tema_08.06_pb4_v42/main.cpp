#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int n, a[100]={0},nr;
    ifstream in("numere.txt");
    in>>n;
    for(int i=0;i<n;i++){
        in>>nr;
        a[nr]++;
    }
    for(int i=0;i<100;i++){
        if(a[i]==1){
            cout<<i<<" ";
        }
    }
    return 0;
}
