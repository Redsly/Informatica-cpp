#include <iostream>

using namespace std;

int main()
{

    int x, y;
    cin >> x>>y;
    /*while(x*y!=0){
        if(x>y){
            x=x%y;
        }else{
            y=y%x;
        }
    }*/
    do{
        if(x>y){
            x=x%y;
        }else{
            y=y%x;
        }
    }while(x*y!=0);
    cout << x+y;
    return 0;
}
