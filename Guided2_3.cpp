#include<iostream>
#include<time.h>

using namespace std;

int main(){
    int matriksA[7][9];
    int matriksB[7][9];
    int matriksjum[7][9];

    for(int i=0;i < 7;i++){
        for(int j=0;j < 9;j++){
            cout<<"Matriks A["<<i<<"]"<<"["<<j<<"] : ";
            matriksA[i][j] = rand()%100;
            cout<<matriksA[i][j]<<endl;
        }
    }cout<<"\n";

    for(int i=0;i < 7;i++){
        for(int j=0;j < 9;j++){
            cout<<"Matriks B["<<i<<"]"<<"["<<j<<"] : ";
            matriksB[i][j] = rand()%100;
            cout<<matriksB[i][j]<<endl;
        }
    }cout<<"\n";

    for(int i=0;i < 7;i++){
        for(int j=0;j < 9;j++){
            matriksjum[i][j]=matriksA[i][j]-matriksB[i][j];
            cout<<"Hasil Matriks A - B "<<"["<<i<<"]"<<"["<<j<<"] : "<<matriksjum[i][j]<<endl;;
        }
    }

    for(int i=0;i < 7;i++){
        for(int j=0;j < 9;j++){
            matriksjum[i][j]=matriksB[i][j]-matriksA[i][j];
            cout<<"Hasil Matriks B - A "<<"["<<i<<"]"<<"["<<j<<"] : "<<matriksjum[i][j]<<endl;;
        }
    }

    return 0;
}
