#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream in("numere.txt");
    int n, a[10]={0}, nr, c;
    while(!in.eof()){
        in>>nr;
        while(nr){
            c=nr%10;
            a[c]++;
            nr=nr/10;
        }
    }
    for(int i=9;i>0;i--){
        for(int j=0;j<a[i];j++){
            cout << i;
        }
    }
    return 0;
}
