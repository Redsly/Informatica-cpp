#include <iostream>

using namespace std;

int main()
{
    int n, v[10], sortat=1, aux, nr_curent, nr_precedent, nr_aparitii=1;
    cout << "n=";
    cin>>n;

    for(int i=0;i<n;i++){
        cout << "v["<<i<<"]=";
        cin>>v[i];
    }
    do{
        sortat=1;
        for(int i=0;i<n;i++){
            if(v[i]>v[i+1]){
                aux=v[i];
                v[i]=v[i+1];
                v[i+1]=aux;
                sortat=0;
            }

        }

    }while(!sortat);
    nr_precedent=v[0];
    nr_aparitii=1;
    for(int i=1;i<n;i++){
        nr_curent=v[i];
        if(nr_curent==nr_precedent){
            nr_aparitii++;
        }else{
            cout <<nr_precedent<<"\t"<<nr_aparitii<<endl;
            nr_aparitii=1;
        }
        nr_precedent=nr_curent;
    }
    cout <<nr_curent<<"\t"<<nr_aparitii<<endl;
    return 0;
}
