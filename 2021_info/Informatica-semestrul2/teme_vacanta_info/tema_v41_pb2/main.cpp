#include <iostream>

using namespace std;

int main()
{
    int x, d=2;
    cin >> x;
    cout << x<<endl;
    /*while(x>=d){
        while(x%d==0){
            x=x/d;
            cout << x<<endl;
        }
        d++;
    }*/
    while(x>=d){
        if(x%d==0){
            x=x/d;
            cout << x<<endl;
        }
        if(x%d==0){
            x=x/d;
            cout << x<<endl;
        }
        /*
        while(x%d==0){
            x=x/d;
            cout << x<<endl;
        }*/
        d++;
    }
    cout << 60%40;
    return 0;
}
