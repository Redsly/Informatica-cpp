#include <iostream>
#include"matrice.h"
using namespace std;

int main()
{
    int a[100][100], b[100][100], c[100][100];
    int na, nb, ma, mb, nc, mc;
    CitireMatrice(a, na, ma);
    CitireMatrice(b, nb, mb);
    cout << "matricea A: \n";
    AfisareMatrice(a, na, ma);
    cout << "matricea B: \n";
    AfisareMatrice(b, nb, mb);
    cout <<"Diagonala Principala la A este: ";
    AfisareDP(a, na, ma);
    cout <<"Diagonala Principala la B este: ";
    AfisareDP(b, nb, mb);
    cout <<"Diagonala Secundara la A este: ";
    AfisareDS(a, na, ma);
    cout <<"Diagonala Secundara la B este: ";
    AfisareDS(b, nb, mb);
    cout <<"Nord-ul la A este: ";
    AfisareNORD(a, na, ma);
    cout <<"Nord-ul la B este: ";
    AfisareNORD(b, nb, mb);
    cout <<"SUD-ul la A este: ";
    AfisareSUD(a, na, ma);
    cout <<"SUD-ul la B este: ";
    AfisareSUD(b, nb, mb);
    cout <<"EST-ul la A este: ";
    AfisareEST(a, na, ma);
    cout <<"EST-ul la B este: ";
    AfisareEST(b, nb, mb);
    cout <<"VEST-ul la A este: ";
    AfisareVEST(a, na, ma);
    cout <<"VEST-ul la B este: ";
    AfisareVEST(b, nb, mb);
    SumaMatrice(a, na, ma, b,nb,mb, c,nc,mc);
    cout <<"Matricea suma este: ";
    AfisareMatrice(c,nc,mc);
    ProdMatrice(a, na, ma, b,nb,mb, c,nc,mc);
    cout <<"Matricea produs este: ";
    AfisareMatrice(c,nc,mc);
    DiferentaMatrice(a, na, ma, b,nb,mb, c,nc,mc);
    cout <<"Matricea diferenta este: ";
    AfisareMatrice(c,nc,mc);
    return 0;
}
