#include <iostream>

using namespace std;
int pozitive(int mat[100][100], int n, int m){
    int counter=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(mat[i][j]>0){
                counter++;
            }
        }
    }
    return counter;
}
int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
