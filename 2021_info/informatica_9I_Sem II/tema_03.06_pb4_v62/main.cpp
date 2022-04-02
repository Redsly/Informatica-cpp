#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int par[100]={0}, impar[100]={0}, n, j=0, m=0;
    ifstream in("date.in");
    ofstream out("date.out");
    while(!in.eof()){
        in>>n;
        if(n%2==0){//par
            par[n]=1;
        }else{//impar
            impar[n]=1;
        }
    }

    for(int i=0; i<100;i++){
        if(impar[i]==1)
            out << i<<" ";
    }
    out << endl;
    for(int i=99; i>=0;i--){
        if(par[i]==1)
            out << i<<" ";
    }
    return 0;
}
