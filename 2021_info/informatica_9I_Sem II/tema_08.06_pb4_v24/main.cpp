#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream f("bac.txt");
    int n, a,b,p[10], gasit=0, dr, st, m;
    f>>n;
    for(int i=0;i<n;i++){
        f>>p[i];
    }
    f>>a;
    f>>b;
    for(int i=0;i<n;i++){
        if(p[i]>=a && p[i]<=b){
            cout << p[i];
            gasit=1;
            break;
        }
    }/*
    for(int i=a;i<=b;i++){
        if(i>=p[1] && i<=p[n]){
            st=1;
            dr=n;
            while(st<=dr && !gasit){
                m=(st+dr)/2;
                if(i==p[m]){
                    gasit=1;
                    cout << i;
                    break;
                }else{
                    if(i<p[m]){
                        dr=m-1;
                    }else{
                        st=m+1;
                    }
                }
            }
        }
    }
*/
    if(gasit==0){
        cout << "NU";
    }
    return n;
}
