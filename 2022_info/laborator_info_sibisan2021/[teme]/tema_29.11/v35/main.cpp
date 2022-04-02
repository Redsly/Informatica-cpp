#include <iostream>
#include <fstream>
using namespace std;

int s[10];
int main()
{
    int n, a[20][20], nr=1, s[10];
    cout << "n=";
    cin>>n;
    ifstream fin("numere.txt");
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            fin>>a[i][j];
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            s[i]+=a[i][j];
        }
    }
    int minim=s[1];
    int poz=0;
    for(int i=1;i<=n;i++){
        if(s[i]<minim){
            minim=s[i];
            poz=i;
        }
    }
    cout << poz
    ;
    return 0;
}
