#include <iostream>

using namespace std;
int prim_rec(int n,int d){
    if(n==1 || n==0){
        return 0;
    }else{
        if(n==2){
            return 1;
        }else{
            if(n%2==0){
                return 0;
            }else{
                if(d*d>n){
                    return 1;
                }else{
                    if(n%d==0){
                        return 0;
                    }else{
                        return prim_rec(n,d+2);
                    }
                }
            }
        }
    }

}
int main()
{
    int n=43;
    if(prim_rec(n, 3)){
        cout << "Prim";
    }else{
        cout << "Nu e prim";
    }
    return 0;
}
