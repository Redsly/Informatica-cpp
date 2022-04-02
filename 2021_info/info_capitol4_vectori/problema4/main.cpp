#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int a[100]={0}, n;
    ifstream in("numere.in");
    ofstream out("numere.out");
    while(!in.eof()){
        in>>n;
        a[n]++;
    }
    for(int i=0;i<100;i++){
        if(a[i]!=0){
            out<< i<<" ";
        }
    }
    return 0;
}
