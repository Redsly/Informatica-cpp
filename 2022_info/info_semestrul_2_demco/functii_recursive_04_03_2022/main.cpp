#include <iostream>

using namespace std;
/*
int sumacif(int n){
    if(n==0){
        return 0;
    }
    else{
        return sumacif(n/10)+n%10;
    }
}
long long fact(int n){
    if(n==0){
        return 1;
    }
    else{
        return fact(n-1)*n;
    }
}
int sn;
int f(int n){
    if(n<10){
        return sn+n;
    }else{
        sn+=n%10;
        n/=10;
        return f(n);
    }
}
int cmmdc(int a, int b){
    if(a==0 || b==0){
        return 0;
    }
    if(a==b){
        return a;
    }else{
        if(a>b){
            cmmdc(a-b, b);
        }else{
            cmmdc(a, b-a);
        }
    }

}
int cmmdc(int a, int b){
    if(a==0 && b==0){
        return -1;
    }else{
        if(b==0){
            return a;
        }
        else{
            return cmmdc(b, a%b);
        }
    }
}
int prog_a(int n, int r, int x){
    if(n==0){
        return 1;
    }else{
        return prog_a(n-1, r,x)+r;
    }
}*/
void baza(int n, int b){
    if(n<b){
        cout << n;
    }else{
        baza(n/b, b);
        cout<< n%b;
    }

}
int main()
{
    cout << prog_a();
    return 0;
}
