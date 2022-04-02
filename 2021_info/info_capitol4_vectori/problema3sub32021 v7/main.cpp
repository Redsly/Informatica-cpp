#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream out("bac.out");
    int x, y, t, tf, counter=1;
    cin>>x>>y;
    out << y<<endl<<x<<endl;
    t=x;
    tf=y;
    counter=(tf-t)/2-1;
    while(t>1){
        tf=t-2*counter;
        counter--;
        t=tf;
        out <<t<<endl;
    }
    return 0;
}
