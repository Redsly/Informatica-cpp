#include <iostream>

using namespace std;

int suma(int a, int b){
    cout <<"#Intregi#";
    return a+b;
}
double suma(int a, double b){
    cout <<"#intregi#Reale#";
    return a+b;
}
double suma(double a, double b){
    cout <<"#Reale#";
    return a+b;
}
int main()
{
    int a=5, b=7;
    double c=17,d=25;
    cout << "Intregi "<<suma(a,b)<<endl;
    cout << "Intregi si real "<<suma(a,c)<<endl;
    cout << "Reale "<<suma(c,d)<<endl;
    return 0;
}
