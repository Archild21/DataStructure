#include<iostream>
#include<time.h>

using namespace std;

int matriksA[7][4];
int matriksB[4][9];
int matriksT[7][9];

int main(){
    cout<<"Matriks A"<<endl;
    for(int i=0;i < 7;i++){
        for(int j=0;j < 4;j++){
            cout<<"Matriks A["<<i<<"]"<<"["<<j<<"] : ";
            matriksA[i][j] = rand()%100;
            cout<<matriksA[i][j]<<endl;
        }
    }cout<<"\n";

    cout<<"Tranpose Matriks A"<<endl;
    for(int i=0;i < 4;i++){
        for(int j=0;j < 7;j++){
            matriksT[i][j] = matriksA[j][i];
            cout<<"Matriks A["<<i<<"]"<<"["<<j<<"] : "<<matriksT[i][j]<<endl;
        }
    }cout<<"\n";

    cout<<"Matriks B"<<endl;
    for(int i=0;i < 4;i++){
        for(int j=0;j < 9;j++){
            cout<<"Matriks B["<<i<<"]"<<"["<<j<<"] : ";
            matriksB[i][j] = rand()%100;
            cout<<matriksB[i][j]<<endl;
        }
    }cout<<"\n";

    cout<<"Tranpose Matriks B"<<endl;
    for(int i=0;i < 9;i++){
        for(int j=0;j < 4;j++){
            matriksT[i][j] = matriksB[j][i];
            cout<<"Matriks B["<<i<<"]"<<"["<<j<<"] : "<<matriksT[i][j]<<endl;
        }
    }cout<<"\n";
    return 0;
}
