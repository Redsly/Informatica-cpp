#include <iostream>

using namespace std;
int x;

int Joc(int &x, int y)
{
    y++;
    cout<<y<<" ";
    if(y<=7)
    {
        x--;
        cout<<x<<" ";
        return Joc(x, y+1)-1;
    }
    else
    {
        cout<<x<<" ";
        return 5;
    }
}

int main(){
    x=3;
    cout<<Joc(x,x);
    cout<<" "<<x;
    return 0;
}

