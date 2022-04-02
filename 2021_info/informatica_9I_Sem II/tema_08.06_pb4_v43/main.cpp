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
    for(int i=99;i>0;i--){
        for(int j=0;j<a[i];j++){
                if(a[i])
                    cout<<i;
        }
    }
    return 0;
}
