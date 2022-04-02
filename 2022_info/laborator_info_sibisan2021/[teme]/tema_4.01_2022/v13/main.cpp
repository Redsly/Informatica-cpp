///problema 3
#include <iostream>

using namespace std;
int gasire(int n){
    int gr=1;
    int nr=0;
    int gasit=0;
    while(gasit==0){
        int gr_copie=gr;
        while(gr_copie){
            nr++;
            if(n==nr){
                gasit=gr_copie;
            }
            gr_copie--;
        }
        gr++;
    }
    return gasit;
}
int main()
{
    int n;
    cout << "n=";
    cin>>n;
    cout << gasire(n);
    return 0;
}
