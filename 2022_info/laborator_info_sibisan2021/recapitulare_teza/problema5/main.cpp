#include <iostream>

using namespace std;

int main()
{
    short unsigned n;
    unsigned long nr, nr_copie;
    int c1, c2,panta=0, max_panta=0, min_panta=99999999, contor_nr_panta=0;
    cout << "n=";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"nr=";
        cin>>nr;
        panta=1;
        if(nr<10){
            if(min_panta>nr){
                min_panta=nr;
            }
            if(max_panta<nr){
                max_panta=nr;
            }
            contor_nr_panta++;
        }
        else{
            nr_copie=nr;
            c1=nr_copie%10;
            nr_copie=nr_copie/10;
            c2=nr_copie%10;
            nr_copie=nr_copie/10;
            if(c1<c2)
            {
                while(nr_copie)
                {
                    c1=c2;
                    c2=nr_copie%10;
                    nr_copie=nr_copie/10;
                    if(c1>c2)
                    {
                        panta=0;
                    }
                }
                if(panta==1)
                {
                    if(min_panta>nr)
                    {
                        min_panta=nr;
                    }
                    if(max_panta<nr)
                    {
                        max_panta=nr;
                    }
                    contor_nr_panta++;
                }
            }
            else{
                 while(nr_copie)
                {
                    c1=c2;
                    c2=nr_copie%10;
                    nr_copie=nr_copie/10;
                    if(c1<c2)
                        panta=0;
                }
                if(panta==1)
                {
                    if(min_panta>nr)
                    {
                        min_panta=nr;
                    }
                    if(max_panta<nr)
                    {
                        max_panta=nr;
                    }
                    contor_nr_panta++;
                }
            }
        }

    }
    if(contor_nr_panta!=0){
        cout << "Numarul de valori-panta: "<<contor_nr_panta<<endl;
        cout <<  "Cea mai mare valoare-panta: "<<max_panta<<endl;
        cout <<  "Cea mai mica valoare-panta: "<<min_panta<<endl;
    }
    else{
        cout << "Nu exista";
    }
    return 0;
}
