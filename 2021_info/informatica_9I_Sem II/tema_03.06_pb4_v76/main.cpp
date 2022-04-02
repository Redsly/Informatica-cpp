#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int n, m, a[10], b[10];
    ifstream in("bac.txt");
    in>>n;
    in>>m;
    for(int i=0; i<n;i++){
        in>>a[i];
    }
    for(int i=0; i<m;i++){
        in>>b[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i]==b[j]){
                cout << a[i]<<" ";
            }
        }
    }
    return 0;
}
