#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int n,m, a[20][20], v[10]={1,1,1,1,1,1,1,1,1,1};
    cout << "m=";
    cin>>m;
    cout << "n=";
    cin>>n;
    ifstream fin("alina.sad");
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            fin>>a[i][j];
        }
    }
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            v[j]=v[j]*a[i][j];
        }
    }
    int max_1=0, max_2=0, poz_1, poz_2;
    for(int i=1;i<=n;i++){
            if(v[i]>max_1){
                max_1=v[i];
                poz_1=i;
            }
            if(v[i]!=max_1 && v[i]>max_2){
                max_2=v[i];
                poz_2=i;
            }
    }
    cout  << poz_1<<" "<<poz_2;
    return 0;
}
