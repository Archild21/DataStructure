#include<iostream>

using namespace std;

int main(){
    float matriksA[2][3];
    float matriksB[3][4];
    float matrikskali[2][4];

    for(int i=0;i < 2;i++){
        for(int j=0;j < 3;j++){
            cout<<"Matriks A["<<i<<"]"<<"["<<j<<"] : ";
            cin>>matriksA[i][j];
        }
    }cout<<"\n";

    for(int i=0;i < 3;i++){
        for(int j=0;j < 4;j++){
            cout<<"Matriks B["<<i<<"]"<<"["<<j<<"] : ";
            cin>>matriksB[i][j];
        }
    }cout<<"\n";

    for(int i=0;i < 2;i++){
        for(int j=0;j < 4;j++){
                for(int k = 0;k < 3;k++){
                    matrikskali[i][j] += matriksA[i][k]*matriksB[k][j];
            }
            cout<<"Hasil Matriks A x B "<<"["<<i<<"]"<<"["<<j<<"] : "<<matrikskali[i][j]<<endl;
        }
    }

    return 0;
}
