#include<iostream>
#include<string>

using namespace std;

const int maksimal_tumpukan = 10;
char ya_tidak;
int pilihan,halaman;
string judul,penerbit;
double harga;

struct buku{
    string judul_buku;
    string pengarang;
    int tebal_halaman;
    double harga_buku;
};

struct tumpukan{
 int posisi;
 buku fiksi[maksimal_tumpukan];
};
tumpukan rak;

void inisialisasi(){
 rak.posisi = -1;
}

bool kosong(){
    if(rak.posisi == -1){
        return true;
    }else{
        return false;
    }
}

bool penuh(){
    if(rak.posisi == maksimal_tumpukan - 1){
        return true;
    }else{
        return false;
    }
}

void push_tumpukan(string judulMasuk,string penerbitMasuk, int halMasuk, double hargaMasuk){
    if(kosong() == true){
        rak.posisi++;
        rak.fiksi[rak.posisi].judul_buku = judulMasuk;
        rak.fiksi[rak.posisi].pengarang = penerbitMasuk;
        rak.fiksi[rak.posisi].tebal_halaman = halMasuk;
        rak.fiksi[rak.posisi].harga_buku = hargaMasuk;
        cout<<"Berhasil memasukkan buku : ";
        cout<<"Judul : "<<judulMasuk<<endl;
        cout<<"Penerbit : "<<penerbitMasuk<<endl;
        cout<<"Jumlah Halaman : "<<halMasuk<<endl;
        cout<<"Harga : "<<hargaMasuk<<endl;
    }else if(penuh() == false){
        rak.posisi++;
        rak.fiksi[rak.posisi].judul_buku = judulMasuk;
        rak.fiksi[rak.posisi].pengarang = penerbitMasuk;
        rak.fiksi[rak.posisi].tebal_halaman = halMasuk;
        rak.fiksi[rak.posisi].harga_buku = hargaMasuk;
        cout<<"Berhasil memasukkan buku : ";
        cout<<"Judul : "<<judulMasuk<<endl;
        cout<<"Penerbit : "<<penerbitMasuk<<endl;
        cout<<"Jumlah Halaman : "<<halMasuk<<endl;
        cout<<"Harga : "<<hargaMasuk<<endl;
    }else{
        cout<<"Rak sudah penuh"<<endl;
    }
}

void pop_tumpukan(){
    if(kosong() == true){
    cout<<"Tumpukan kosong"<<endl;
    }else{
        rak.posisi--;
        cout<<"Data berhasil dihapus"<<endl;
    }
}
void tampil_data(){
    if(kosong() == true){
        cout<<"Tidak ada data"<<endl;
    }else{
        for(int c = rak.posisi; c >= 0; c--){
            cout<<"Buku Rak "<<"["<<c+1<<"]"<<endl;
            cout<<rak.fiksi[c].judul_buku<<endl;
            cout<<rak.fiksi[c].pengarang<<endl;
            cout<<rak.fiksi[c].tebal_halaman<<endl;
            cout<<rak.fiksi[c].harga_buku<<endl;
        }
    }
}

bool keluar(char yesorno){
    if(yesorno == 'Y'||yesorno == 'y'){
        cout<<"Baik....Trima Kasih!"<<endl;
        return true;
    }else{
        return false;
    }
}

int main(){
    inisialisasi();
    do{
    cout<<"=========Penyimpanan Buku========"<<endl;
    cout<<"1.Input Buku"<<endl;
    cout<<"2.Hapus Buku"<<endl;
    cout<<"3.Daftar Buku"<<endl;
    cout<<"4.Keluar"<<endl;
    cout<<"Masukkan Pilihan : "; cin>>pilihan;
    switch(pilihan){
    case 1: system("CLS");
    cout<<"===========Input Buku============"<<endl;
    cout<<"Judul Buku : "; cin>>judul;
    cout<<"Nama Penerbit  : "; cin>>penerbit;
    cout<<"Tebal Buku : "; cin>>halaman;
    cout<<"Harga Buku : "; cin>>harga;
    push_tumpukan(judul,penerbit,halaman,harga);
    cout<<"Ingin Keluar? (y/n) : "; cin>>ya_tidak;
    keluar(ya_tidak);
        break;
    case 2: system("CLS");
    pop_tumpukan();
    cout<<"Ingin Keluar? (y/n) : "; cin>>ya_tidak;
    keluar(ya_tidak);
        break;
    case 3: system("CLS");
    tampil_data();
    cout<<"Ingin Keluar? (y/n) : "; cin>>ya_tidak;
    keluar(ya_tidak);
        break;
    case 4: system("CLS");
    cout<<"Ingin Keluar? (y/n) : "; cin>>ya_tidak;
    keluar(ya_tidak);
        break;
    default :
    cout<<"Pilihan Tidak Tersedia"<<endl;
    cout<<"Ingin Keluar? (y/n) : "; cin>>ya_tidak;
    keluar(ya_tidak);
    }
    system("CLS");
}while(keluar(ya_tidak) == false);
    return 0;
}
