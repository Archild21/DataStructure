#include <iostream>

using namespace std;

const int row = 2;
const int colomn = 3;
int matriks[row][colomn];
int Tmatriks[row][colomn];

int main(){
    cout<<"Masukkan Nilai Matriks"<<endl;
    for(int x = 0;x < 2;x++){
        for(int y = 0;y < 3;y++){
            cout<<"Matriks"<<"["<<x<<"]"<<"["<<y<<"]"<<" : ";
            cin>>matriks[x][y];
        }
    }

    for(int x = 0;x < 3;x++){
        for(int y = 0;y < 2;y++){
            Tmatriks[y][x] = matriks[x][y];
            cout<<Tmatriks[x][y]<<" ";
    }cout<<"\n";
}
    return 0;
}
