///problema 3
#include <iostream>

using namespace std;
int multiplii(int a, int b, int c){
    int nr=0;
    for(int i=a;i<b;i++){
        if(i%c==0){
            nr++;
        }
    }
    return nr;
}
int main()
{
    int x,y,z;
    cin>>x;
    cin>>y;
    cin>>z;
    cout<<multiplii(x, y, z);
    return 0;
}
