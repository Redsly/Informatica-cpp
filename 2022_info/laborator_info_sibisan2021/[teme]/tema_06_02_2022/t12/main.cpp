#include <iostream>

using namespace std;
void frate(int x,int &y){
    int p=1;
    while(x){
        if((x%10)+1<10){
            y=y+((x%10)+1)*10;
            p*=10;
        }
        x/=10;
    }
}
int main()
{
    int a=1027 ,b=0;
    frate(a, b);
    cout <<b;
    return 0;
}
