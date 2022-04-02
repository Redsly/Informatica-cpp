#include <iostream>
#include <fstream>
using namespace std;
/*{
    int n=0, a[10],c,s, par=0;
    ifstream in("bac.txt");
    while(!in.eof()){
        in>>a[n];
        c=a[n];
        s=0;
        while(c){
            s=s+c%10;
            c=c/10;
        }
        if(s%2==0){
            par++;
        }
        n++;
    }
    n=n-1;
    for(int i=0;i<n;i++){
        cout<<a[i];
        if((i+1)%5==0){
            cout<<endl;
        }else{
            cout<<" ";
        }
    }
    cout <<endl<<par;
    return 0;
}
*/
int main(){
    ifstream in("bac.txt");
    int x, s, indice=1, c, pr=0, y;
    while(in>>x){
        s=0;
        y=x;
        while(c){
            c=y%10;
            s=s+c;
            y=y/10;
        }
        if(s%2==0){
            pr++;
        }
        cout <<x;
        if(indice%5==0){
            cout <<endl;
        }else{
            cout <<" ";
        }
        indice++;
    }
    cout <<endl;
    cout <<"In fisier sunt "<< pr<<" numere care au suma cifrelor para";
    return 0;
}
