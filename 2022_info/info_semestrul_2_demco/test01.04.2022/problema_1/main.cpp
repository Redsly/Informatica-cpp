#include <iostream>

using namespace std;
int Fib(int nr_ord){
    if(nr_ord==0 || nr_ord==1){
        return 1;
    }
    if(nr_ord>1){
        return Fib(nr_ord-1)+Fib(nr_ord-2);
    }
}
void Gen(long int v, int n){
    if(Fib(n-1)<=v){
        Gen(v, ++n);
    }else{
        int aux=Fib(n-2);
        cout <<aux<<" ";
        v-=aux;
        if(v>0){
            Gen(v, 1);
        }
    }
}
int main()
{
    long int x;
    cin>>x;
    Gen(x,1);
    return 0;
}
