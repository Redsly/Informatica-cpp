#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int n, a[100], nr, i=0;
    ifstream in("numere.in");
    ofstream out("numere.out");
    in>>n;
    while(n){
        in>>nr;
        a[i]=nr;
        i++;
        if(nr%2==0){
            a[i]=2019;
            i++;
        }
        n--;
    }
    for(int m=0;m<i;m++){
        cout << a[m]<<endl;
    }
    return 0;
}
