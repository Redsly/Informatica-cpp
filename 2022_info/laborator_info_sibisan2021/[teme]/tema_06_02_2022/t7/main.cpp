#include <iostream>

using namespace std;
void numar(int x, int y, int k){
    int ct=y-x+1;
    while(ct>k){
        for(int i=x;i<x+k;i++){
            cout << i<<" ";
        }
        cout << "*";
        x=x+k;
        ct-=k;
    }
    for(int i=x;i<=y;i++){
        cout << i<<" ";
    }
    cout << "*";

}
int main()
{
    int x=11,y=21,k=4;
    numar(x,y,k);
    return 0;
}
