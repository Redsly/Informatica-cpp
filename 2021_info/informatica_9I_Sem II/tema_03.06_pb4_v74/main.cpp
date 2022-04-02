#include <iostream>
#include <fstream>
using namespace std;

int main()
{

    int n, a[10]={0}, nrc, m;
    ifstream in("numere.in");
    in>>n;
    for(int i=0; i<n;i++){
        in>>nrc;
        a[nrc]++;
    }
    for(int i=1;i<10;i++){
        if(a[i]>0){
            m=i;
            a[i]--;
            break;
        }
    }
    for(int i=0;i<10;i++){
        for(int j=0; j<a[i];j++){
            m=m*10+i;
        }
    }
    cout << m;
    return 0;
}
