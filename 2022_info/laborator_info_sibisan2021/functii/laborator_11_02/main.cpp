#include <iostream>
#include"Vectori.h"
using namespace std;


int main()
{
    int a[100], n, b[100], m;
    CitireVectori(a, n);
    cout <<"Vector Original: ";
    AfisareVectori(a, n);
    copiaza(b,m,a,n);
    BubleSort(a, n, 1);
    cout <<"Vector Sortat cu ts=1: ";
    AfisareVectori(a, n);
    copiaza(a,n,b,m);
    cout <<"Vector Original: ";
    AfisareVectori(a, n);
    BubleSort(a, n, -1);
    cout <<"Vector Sortat cu ts=-1: ";
    AfisareVectori(a, n);
    return 0;
}
