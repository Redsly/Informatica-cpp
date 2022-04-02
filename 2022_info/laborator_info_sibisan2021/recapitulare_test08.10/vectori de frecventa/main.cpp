#include <iostream>
#include <fstream>
using namespace std;

int vf[10];
int main()
{
    int nr;
    ifstream fin("bac.txt");
    while(fin>>nr){
        vf[nr]++;
    }
    for(int i=0;i<10;i++){
        if(vf[i]!=0){
            cout <<i<< " apare de "<<vf[i]<<" ori";
        }
    }
    return 0;
}
