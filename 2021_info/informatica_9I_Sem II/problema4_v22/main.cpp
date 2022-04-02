#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;
//problema
int main()
{
    int n, a, b,k=0, nr, gasit;
    ifstream in("bac.txt");
    in>>n;
    for(int i=0;i<n;i++){
        in>>a;
        in>>b;
        k=0;
        gasit=0;
        for(int j=b;j>0;j--){
            while(nr<=j){
                nr=pow(2,k);
                k++;
                if(nr==j){
                    cout<< j;
                    break;
                    gasit=1;
                }
            }
            if(gasit==1){
                break;
            }
        }
    }
    return 0;
}
