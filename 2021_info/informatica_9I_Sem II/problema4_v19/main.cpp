#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int n, k, x, y;
    ifstream f1("nr1.txt");
    ifstream f2("nr2.txt");
    f1>>n;
    f2>>k;
    while(!f1.eof() && !f2.eof()){
        f1>>x;
        f2>>y;/*
        if(x==y){
            cout<<x<<;
            f1>>x;
            f2>>y;
        }else{
            if(x<y){
                cout<<x<<" ";
                f1>>x;
            }else{
                cout <<< y<<" ";
                f2>>y;
            }
        }
        */
        if(x<=y){
            cout <<x<<" ";
        }else{
            cout <<y<<" ";
        }
    }
    while(!f1.eof()){
        f1>>x;
        cout << x<<" ";
    }
    while(!f2.eof()){
        f2>>y;
        cout << y<<" ";
    }
    return 0;
}
