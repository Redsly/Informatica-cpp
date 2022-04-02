#include <iostream>

using namespace std;
void scrie(){
    char x;
    cin>>x;
    if(x!='.'){
        scrie();
    }
    cout << x;
}
int main()
{
    scrie();
    return 0;
}
