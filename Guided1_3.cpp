#include<iostream>

using namespace std;

int main(){
    float matriksA[2][3];
    float matriksB[2][3];
    float matriksjum[2][3];

    for(int i=0;i < 2;i++){
        for(int j=0;j < 3;j++){
            cout<<"Matriks A["<<i<<"]"<<"["<<j<<"] : ";
            cin>>matriksA[i][j];
        }
    }cout<<"\n";

    for(int i=0;i < 2;i++){
        for(int j=0;j < 3;j++){
            cout<<"Matriks B["<<i<<"]"<<"["<<j<<"] : ";
            cin>>matriksB[i][j];
        }
    }cout<<"\n";

    for(int i=0;i < 2;i++){
        for(int j=0;j < 3;j++){
            matriksjum[i][j]=matriksA[i][j]+matriksB[i][j];
            cout<<"Hasil Matriks A + B "<<"["<<i<<"]"<<"["<<j<<"] : "<<matriksjum[i][j]<<endl;;
        }
    }

    return 0;
}
