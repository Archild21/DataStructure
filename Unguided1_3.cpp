#include<iostream>

using namespace std;

int matriksA[2][2] = {{5,4},{3,8}};
int matriksB[2][2] = {{25,13},{10,9}};
int matriksIn[2][2];
int det;

int main(){
    for(int i = 0;i < 2;i++){
        for(int j = 0;j < 2;j++){
            cout<<"Matriks A"<<"["<<i<<"]"<<"["<<j<<"] = "<<matriksA[i][j]<<endl;
        }
    }cout<<"\n"<<endl;
    cout<<"Invers Matriks A"<<endl;
    det = matriksA[0][0]*matriksA[1][1]-matriksA[0][1]*matriksA[1][0];
    matriksIn[0][0] = matriksA[1][1];
    matriksIn[0][1] = matriksA[0][1]*-1;
    matriksIn[1][0] = matriksA[1][0]*-1;
    matriksIn[1][1] = matriksA[0][0];
    for(int i = 0;i < 2;i++){
        for(int j = 0;j < 2;j++){
            cout<<"Matriks A"<<"["<<i<<"]"<<"["<<j<<"] = "<<(float)matriksIn[i][j]/det<<endl;
        }
    }cout<<"\n"<<endl;

    for(int i = 0;i < 2;i++){
        for(int j = 0;j < 2;j++){
            cout<<"Matriks B"<<"["<<i<<"]"<<"["<<j<<"] = "<<matriksB[i][j]<<endl;
        }
    }cout<<"\n"<<endl;
     cout<<"Invers Matriks B"<<endl;
    det = matriksB[0][0]*matriksB[1][1]-matriksB[0][1]*matriksB[1][0];
    matriksIn[0][0] = matriksB[1][1];
    matriksIn[0][1] = matriksB[0][1]*-1;
    matriksIn[1][0] = matriksB[1][0]*-1;
    matriksIn[1][1] = matriksB[0][0];
    for(int i = 0;i < 2;i++){
        for(int j = 0;j < 2;j++){
            cout<<"Matriks B"<<"["<<i<<"]"<<"["<<j<<"] = "<<(float)matriksIn[i][j]/det<<endl;
        }
    }cout<<"\n"<<endl;


    return 0;
}
