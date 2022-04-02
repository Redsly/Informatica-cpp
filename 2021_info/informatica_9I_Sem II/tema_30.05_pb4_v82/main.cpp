#include <iostream>
#include <fstream>
using namespace std;
int fr[30];
int a[30];
int main()
{
    int n=0,m,c_mare=0,c_mic=0, mare=10, mic=99;
    int i;
    ifstream in("numere.in");
    ofstream out("numere.out");
    in>>a[n];
    while(!in.eof()){
        n++;
        in>>a[n];
    }
    for(int i=0; i<n; i++){
        if(a[i]>mare && a[i]<=99){
            mare=a[i];
        }
        if(a[i]<mic && a[i]>=10){
            mic=a[i];
        }
    }
    for(int i=0; i<n;i++){
        if(a[i]==mare){
            c_mare++;
        }
        if(a[i]==mic){
            c_mic++;
        }
    }
    m=n;
    out << mare<<" "<<c_mare<<endl;
    out << mic << " "<<c_mic<<endl;
    return 0;

}
