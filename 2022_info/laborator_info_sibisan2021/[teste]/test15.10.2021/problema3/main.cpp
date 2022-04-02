#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int numar, vector_frecventa[10]={0}, cifra_curenta;
    ifstream fin("numere.txt");
    while(fin>>numar){
        while(numar){
            cifra_curenta=numar%10;
            numar=numar/10;
            vector_frecventa[cifra_curenta]++;
        }
    }
    for(int i=9;i>=0;i--){
        if(vector_frecventa[i]!=0){
            for(int j=vector_frecventa[i];j>0;j--){
                cout <<i;
            }
        }
    }
    return 0;
}
