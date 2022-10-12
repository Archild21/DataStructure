#include <iostream>

using namespace std;

struct pohon{
 pohon* kanan;
 char data;
 pohon* kiri;
};

pohon* simpul;
pohon* root;
pohon* saatIni;
pohon* helperA;
pohon* helperB;
pohon* alamat[256];

void inisialisasi(){
 root = NULL;
}

void simpulBaru(char dataMasukkan){
 simpul = new pohon;
 simpul->data = dataMasukkan;
 simpul->kanan = NULL;
 simpul->kiri = NULL;
}

void simpulAkar(){
    if(root == NULL){
        char dataAnda;
        cout << "Silahkan Masukkan Data : ";
        cin >> dataAnda;
        simpulBaru(dataAnda);
        root = simpul;
        cout << "Root terbentuk..." << endl;
    }else{
        cout << "Root sudah ada..." << endl;
    }
 }

void bacaPohon(){
    if(root != NULL){
        int i, n, pencacah;
        i = 1;
        n = 1;
        pencacah = 0;
        cout<<endl;
        while(alamat[i] != NULL){
            saatIni = alamat[i];
            cout << saatIni->data << " ";
            pencacah++;
                if(pencacah == n){
                    cout << endl;
                    pencacah = 0;
                    n = n*2;
                } i++;
        }
    }
}

void tambahSimpul(){
    if(root != NULL){
        int i, j, penanda,pil;
        char dataUser;
        i = 1; j = 1;
        penanda = 0;
        alamat[i] = root;
        while(penanda == 0 && j < 256){
            cout << "1. Masukkan Data Kiri " << endl;
            cout << "2. Masukkan Data Kanan " << endl;
            cout << "Masukan Pilihan (1-2) :";
            cin >> pil;
            if (pil==1){
                cout << "Masukkan Data Kiri : ";
                cin >> dataUser;
                if(dataUser != '0'){
                    simpulBaru(dataUser);
                    saatIni = alamat[i];
                    saatIni->kiri = simpul;
                    j++;
                    alamat[j] = simpul;
                }else{
                    penanda = 1;
                    j++;
                    alamat[j] = NULL;
                }
            }else if(pil == 2){
                if(penanda == 0){
                    cout << "Masukkan Data Kanan : ";
                    cin >> dataUser;
                    if(dataUser != '0'){
                        simpulBaru(dataUser);
                        saatIni = alamat[i];
                        saatIni->kanan = simpul;
                        j++;
                        alamat[j] = simpul;
                    }else{
                        penanda = 1; j++;
                        alamat[j] = NULL;
                    }
                }
            }else if(pil == 0){
                bacaPohon();
            } i++;
        }
    }
}

int main(){
 simpulAkar();
 tambahSimpul();
 bacaPohon();
 return 0;
}
