#include <iostream>
#include <windows.h>

using namespace std;

int panjangArray;
int *pointerTinggi;
char lagi = 't';
bool keluar = false;

int main(){
    do{
        cout<<"Masukkan panjang array : ";
        cin>>panjangArray;
        pointerTinggi = new int[panjangArray];

        for(int n = 0; n < panjangArray; n++){
            pointerTinggi[n] = 13+n;
            cout<<pointerTinggi[n]<<endl;
            }
    cout<<"Lagi (y/t) ? ";
    cin>>lagi;
        if(lagi == 'y' || lagi == 'Y'){
            system("CLS");
            }else{
                keluar = true;
                }
    }while(keluar == false);

    return 0;
}
