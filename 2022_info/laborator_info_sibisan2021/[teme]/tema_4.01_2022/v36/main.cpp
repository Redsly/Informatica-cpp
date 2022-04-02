#include <iostream>
#include <fstream>
using namespace std;
int cifra(int a){
    int c, c_para=-1;
    while(a){
        c=a%10;
        a/=10;
        if(c%2==0 && c_para==-1){
            c_para=c;
        }
    }
    if(c_para==0){
        return -1;
    }else{
        return c_para;
    }
}
int fr[10];
int main()
{
    int n, nr, nr_final=0;
    ifstream fin("bac.in");
    fin>>n;
    for(int i=0;i<n;i++){
        fin>>nr;
        if(nr==0){
            fr[0]++;
        }
        if(cifra(nr)>0){
            fr[cifra(nr)]++;
        }
    }
    for(int i=9;i>=0;i--){
        if(i%2==0){
            while(fr[i]!=0){
                nr_final=nr_final*10+i;
                fr[i]--;
            }
        }
    }
    cout << nr_final;
    return 0;
}
