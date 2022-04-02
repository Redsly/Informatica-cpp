#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int n,nr;
    ifstream in("bac.txt");
    while(!in.eof()){
        in>>n;
        nr=n;
        while(nr%2==0){
            nr=nr/2;
        }
        if(nr==1){
            cout << n<<endl;
        }
    }
    return 0;
}
