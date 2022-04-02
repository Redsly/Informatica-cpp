#include <iostream>

using namespace std;

int main()
{
    int x, y, nr_x=0, nr_y=0, c, o;
    cin>>x>>y;
    while(x){
        c=x%10;
        x=x/10;
        if(c%2!=0){
            nr_x=nr_x*10+c;
        }
    }
    while(y){
        c=y%10;
        y=y/10;
        if(c%2!=0){
            nr_y=nr_y*10+c;
        }
    }
    o=0;
    while(nr_x){
        c=nr_x%10;
        o=o*10+c;
        nr_x=nr_x/10;
    }
    if(o==0){
        o=1;
    }
    if(o=nr_y){
        cout << "1";
    }else{
        cout << "0";
    }
    return 0;
}
