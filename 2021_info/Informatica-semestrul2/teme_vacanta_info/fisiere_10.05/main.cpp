#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream in("date.in");
    int x, sp=0, cnrp=0;
    /*while(in>>x){
        in >> x;
        if(x%2==0){
            sp=sp+x;
            cnrp++;
        }
    }*/
    while(!in.eof()){
        in >> x;
        if(x%2==0){
            sp=sp+x;
            //cnrp++;
        }
    }
    cout << "MA NR P este "<< sp;//(float)cnrp;
    return 0;
}
