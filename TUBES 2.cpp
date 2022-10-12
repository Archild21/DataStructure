#include<iostream>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#define max 20

using namespace std;

int pilkar,pilih,ada,jmlkarya,gaji,jamkerja,jml,a = 0,helper[10],loop[20];
const int makstump = 10;
string nmkarya,passkarya,nmmanager,passmanager,d;
char yaTidak,yaBack;

struct identitas{
    string nama,pass;
    int jam_kerja,gaji;
};

struct lowongan{
    int posisi;
    identitas toko[makstump];
};
lowongan karyawan;


void inisialisasistak(){
 karyawan.posisi = -1;
}

bool kosong(){
    if(karyawan.posisi == -1){
        return true;
    }else{
        return false;
    }
}

bool penuh(){
    if(karyawan.posisi == makstump - 1){
        return true;
    }else{
        return false;
    }
}

void push_tumpukan(string namaMasuk,string passMasuk, int jamkerjaMasuk, int gajiMasuk){
    if(kosong() == true){
        karyawan.posisi++;
        karyawan.toko[karyawan.posisi].nama = namaMasuk;
        karyawan.toko[karyawan.posisi].pass = passMasuk;
        karyawan.toko[karyawan.posisi].jam_kerja = jamkerjaMasuk;
        karyawan.toko[karyawan.posisi].gaji = gajiMasuk;
        cout<<"\nData Berhasil Masuk"<<endl;;
        cout<<"Nama : "<<namaMasuk<<endl;
        cout<<"Pass : "<<passMasuk<<endl;
        cout<<"Jam Kerja : "<<jamkerjaMasuk<<endl;
        cout<<"Gaji Masuk : "<<gajiMasuk<<endl;
    }else if(penuh() == false){
        karyawan.posisi++;
        karyawan.toko[karyawan.posisi].nama = namaMasuk;
        karyawan.toko[karyawan.posisi].pass = passMasuk;
        karyawan.toko[karyawan.posisi].jam_kerja = jamkerjaMasuk;
        karyawan.toko[karyawan.posisi].gaji = gajiMasuk;
        cout<<"\nData Berhasil Masuk"<<endl;;
        cout<<"Nama : "<<namaMasuk<<endl;
        cout<<"Pass : "<<passMasuk<<endl;
        cout<<"Jam Kerja : "<<jamkerjaMasuk<<endl;
        cout<<"Gaji Masuk : "<<gajiMasuk<<endl;
    }else{
        cout<<"Lowongan sudah penuh"<<endl;
    }
}

void pop_tumpukan(){
    if(kosong() == true){
    cout<<"Lowongan kosong"<<endl;
    }else{
        karyawan.posisi--;
        cout<<"Data berhasil dihapus"<<endl;
    }
}

void tampil_dataKaryawan(){
    if(kosong() == true){
        cout<<"Tidak ada data"<<endl;
    }else{
        for(int c = karyawan.posisi; c >= 0; c--){
            cout<<"Karyawan "<<"["<<c+1<<"]"<<endl;
            cout<<karyawan.toko[c].nama<<endl;
            cout<<karyawan.toko[c].pass<<endl;
            cout<<karyawan.toko[c].jam_kerja<<endl;
            cout<<karyawan.toko[c].gaji<<endl;
        }
    }
}

void seqKaryawan(string cariNama, string cariPass){
ada = 0;
    for(int i = 0;i < makstump;i++){
        if(karyawan.toko[i].nama == cariNama && karyawan.toko[i].pass == cariPass){
            ada = 1;
            break;
        }
    }
}

struct queue{
    int head;
    int tail;
    char data[20][20];
};

queue nama,pesanan;

void inisialisasique(){
    nama.head=nama.tail=-1;
    pesanan.head=pesanan.tail=-1;
}

bool isFull(){
    if(nama.tail==max-1)
        return true;
    else
        return false;
}

bool isFull_2(){
    if(pesanan.tail==max-1)
        return true;
    else
        return false;
}

bool isEmpty(){
    if(nama.tail == -1 && nama.head == -1){
        return true;
    }else{
        return false;
    }
}

void enqueue(char d[20]){
    nama.head=0;
    nama.tail++;
    strcpy(nama.data[nama.tail],d);
}

void enqueue_2(char d[20]){
    pesanan.head=0;
    pesanan.tail++;
    strcpy(pesanan.data[pesanan.tail],d);
}

void dequeue(){
    int cacah = 0;
    string nma;
    cout<<"Antrian dengan nama "<<nama.data[nama.head]<< " sudah dilayani"<<endl;

    nma = nama.data[nama.head];
    while(nama.data[cacah] == nma){
        cacah++;
    }
    for(int d = 0;d < cacah;d++){
        for(int i=nama.head;i<=nama.tail;i++)
            strcpy(nama.data[i],nama.data[i+1]);
            nama.tail--;

        for(int i=pesanan.head;i<=pesanan.tail;i++)
            strcpy(pesanan.data[i],pesanan.data[i+1]);
            pesanan.tail--;
    }
}

void cari(string d){
    system("cls");
    for(int i=nama.head;i<=nama.tail;i++){
        if(nama.data[i]==d){
            cout<<"Nama "<<d<<" ditemukan di antrian ke-"<<i+1<<endl;
            break;
        }
    }
}

void ganti(string d){
    char x[20],y[20];
    system("cls");
    for(int i=0;i<=nama.tail;i++){
            if(nama.data[i]==d){
                cout<<"\nNama Pemesan : ";
                cin>>x;
                cout<<"Makanan yang dipesan : ";
                cin>>y;
                strcpy(nama.data[i],x);
                strcpy(pesanan.data[i],y);
                cout<<"Data pesanan"<<d<<"dirubah menjadi"<<nama.data[i]<<"dengan pesanan : "<<pesanan.data[i];
        }
    }
}

struct listPenjualan{
    string data;
    listPenjualan* next;
};

listPenjualan *head;
listPenjualan *tail;
listPenjualan *simpul_baru;

void inisialisasi(){
    head = NULL;
    tail = NULL;
}

bool list_kosong(){
    if(head == NULL){
        return true;
    }else{
        return false;
    }
}

void buat_simpul(string dataMasukkan){
    simpul_baru = new listPenjualan;
    simpul_baru->data = dataMasukkan;
    simpul_baru->next = NULL;
}


void tambahPenjualan(string newJual){
        buat_simpul(newJual);
        if(list_kosong()==true){
            head = simpul_baru;
            tail = simpul_baru;
            simpul_baru->next = head;
        }else{
            while(tail->next != head){
                tail=tail->next;
            }tail->next = simpul_baru;
            simpul_baru->next = head;
        }

}


void hapusPenjualan(){
    if(list_kosong()==true){
        cout<<"Tidak ada data"<<endl;
    }else{
        listPenjualan *helper;
        helper = head;
        tail = head;
        if(helper->next == head){
            head = NULL;
            tail = NULL;
            delete helper;
        }else{
            while(helper->next != head){
                helper = helper->next;
            }while(tail->next!=helper){
                tail = tail->next;
            }tail->next = head;
            helper->next = NULL;
            delete helper;
        }
    }
}

void tampilPenjualan(){
    int cacah;
    if(list_kosong()==true){
        cout<<"Tidak ada data"<<endl;
    }else{
        tail = head;
        do{cout<<cacah<<". "<<tail->data<<endl;
        tail = tail->next;
        cacah++;
        }while(tail != head);
        cout<<endl;
    }
}

void hapus(){
    system("cls");
    nama.head=nama.tail=-1;
    pesanan.head=pesanan.tail=-1;
    cout<<"Semua isi antrian telah dihapus";
}

void keluar(){
    cout<<"\nKeluar (y/t)? : ";
    cin>>yaTidak;
    if(tolower(yaTidak) !=  'y'){
        system("cls");
    }
}

void kembali(){
    cout<<"Kembali Menu Sebelumnya (y/t)? : ";
    cin>>yaBack;
    if(tolower(yaBack) !=  'y'){
        system("cls");
    }
}


int main(){
    inisialisasistak();
    do{
    cout<<"==================================================="<<endl;
    cout<<"----------------------  Menu  ---------------------"<<endl;
    cout<<"==================================================="<<endl;
    cout<<" Note : harap melakukkan pendaftaran sebelum login"<<endl;
    cout<<"1. Login"<<endl;
    cout<<"2. Daftar"<<endl;
    cout<<"Masukkan pilihan : ";
    cin>>pilih;
    if(pilih == 1){
        if(ada != 1){
            cout<<"Harap Daftar Terlebih Dahulu"<<endl;
            keluar();
        }else{
            do{
                system("CLS");
                yaBack = 0;
                cout<<"==================================================="<<endl;
                cout<<"---------------------  Login  ---------------------"<<endl;
                cout<<"==================================================="<<endl;
                cout<<"1. Karyawan"<<endl;
                cout<<"2. Manager"<<endl;
                cout<<"3. Keluar"<<endl;
                cout<<"Masukkan Pilihan  : ";
                cin>>pilih;

                if(pilih == 1){
                cout<<"Masukkan nama : "; cin>>nmkarya;
                cout<<"Masukkan password : "; cin>>passkarya;
                seqKaryawan(nmkarya,passkarya);
                    if(ada == 1){
                    cout<<"Selamat Datang "<<nmkarya<<endl;
                    cout<<"Have nice day"<<endl;
                    cout<<"\n----------tekan keyword untuk melanjutkan----------"<<endl;
                    getch();
                    system("CLS");


                cout<<"==================================================="<<endl;
                cout<<"---------------  Pelayanan Antrian  ---------------"<<endl;
                cout<<"==================================================="<<endl;
                cout<<"\n\t   tekan enter untuk melanjutkan"<<endl;
                getch();
                system("cls");

                int pilih;
                inisialisasique();
                char x[20],y[20];

                do{
                system("CLS");
                cout<<"========= Menu Antrian ========="<<endl;
                cout<<" 1. Enque Antrian"<<endl;
                cout<<" 2. Deque Antrian Pertama"<<endl;
                cout<<" 3. Ganti Pesanan"<<endl;
                cout<<" 4. Deque Semua Antrian"<<endl;
                cout<<" 5. Kembali "<<endl;
                cout<<"================================"<<endl;
                cout<<"\nAntrian sekarang :"<<endl;

                if(nama.tail==-1){
                    cout<<"(Antrian kosong)"<<endl;
                }else{
                    for(int i=0;i<=nama.tail;i++)
                    cout<<i+1<<". "<<nama.data[i]<<" dengan pesanan : "<<pesanan.data[i]<<endl;
                }

                cout<<"\nMasukkan pilihan : ";
                cin>>pilih;

                switch(pilih){
                    case 1:
                    if(!isFull()){
                        cout<<"\nNote : jika nama terdapat spasi pakai underscore(_)\n";
                        cout<<" Nama Pemesan : ";
                        cin>>x;
                        cout<<"\nNote : jika nama makanan terdapat spasi pakai underscore(_)\n";
                        cout<<" Masukkan jumlah pesanan : ";
                        cin>>jml;
                        if(a != 0){
                            helper[a] = jml;
                            loop[a] = loop[a-1] + helper[a];
                        }else{
                            loop[a] = 0;
                            helper[a] = jml;
                        }
                            int b = loop[a] + helper[a];
                            for(int c = loop[a];c < b;c++){
                                cout<<" Menu yang dipesan : ";
                                cin>>y;
                                enqueue(x);
                                enqueue_2(y);
                                tambahPenjualan(y);
                            }
                        system("CLS");
                        a++;
                    }else{
                        cout<<"\nAntrian sudah penuh!"<<endl;
                    }
                    break;

                    case 2:
                        if(isEmpty()){
                            cout<<"\n\tAntrian masih kosong!"<<endl;
                            cout<<" tekan enter untuk melanjutkan"<<endl;
                            getch();
                        }else{
                            dequeue();
                            cout<<" tekan enter untuk melanjutkan"<<endl;
                            getch();
                        }
                        break;

                    case 3:
                        if(isEmpty()){
                            cout<<"\n\tAntrian masih kosong!"<<endl;
                            cout<<" tekan enter untuk melanjutkan"<<endl;
                            getch();
                        }else{
                            cout<<"Masukkan nama yang ingin diganti : ";
                            cin>>d;
                            ganti(d);
                        }
                    break;

                    case 4:
                        if(isEmpty()){
                            cout<<"\n\tAntrian masih kosong!"<<endl;
                            cout<<" tekan enter untuk melanjutkan"<<endl;
                            getch();
                        }else{
                            hapus();
                        }
                    break;

                    case 5:
                        kembali();
                    break;

                    default :
                        cout<<"Error!";
                        keluar();
                    }
                }while(tolower(yaBack) != 'y');

            }else{
                cout<<"Maaf ada kesalahan pada nama atau kata kunci";
                getch();
            }

        }else if(pilih == 2){
            cout<<"Masukkan nama : "; cin>>nmmanager;
            cout<<"Masukkan password : "; cin>>passmanager;
            if(nmmanager == "admin" && passmanager == "admin123"){
                cout<<"Selamat Datang "<<nmmanager<<endl;
                cout<<"Have nice day"<<endl;
                 cout<<"\n----------tekan keyword untuk melanjutkan----------"<<endl;
                getch();
                system("CLS");


    cout<<"==================================================="<<endl;
    cout<<"-----------------  Admisnistrasi  -----------------"<<endl;
    cout<<"==================================================="<<endl;
    cout<<"\n\t   tekan enter untuk melanjutkan"<<endl;
    getch();
    system("cls");

    do{
        system("CLS");
        cout<<"========= Menu Admin ========="<<endl;
        cout<<" 1. Data karyawan"<<endl;
        cout<<" 2. Hasil Penjualan"<<endl;
        cout<<" 3. Kembali "<<endl;
        cout<<"================================"<<endl;
        cout<<"\nMasukkan pilihan : ";
        cin>>pilih;

        switch(pilih){
            case 1:
                tampil_dataKaryawan();
                getch();
            break;

            case 2 :
                tampilPenjualan();
                getch();
                break;

            case 3 :
                kembali();
                break;

            default :
            cout<<"Error";
            keluar();
            }
                }while(tolower(yaBack) != 'y');
                    }else{
                        cout<<"Maaf ada kesalahan pada nama atau kata kunci";
                        getch();
                    }
            }else if(pilih == 3){
                keluar();
            }else{
                cout<<"Pilihan Tidak Tersedia"<<endl;
                keluar();
            }
        }while(tolower(yaTidak) != 'y');

    }
        }else if(pilih == 2){
            ada = 1;
            system("CLS");
            cout<<"==================================================="<<endl;
            cout<<"----------------------Setting----------------------"<<endl;
            cout<<"==================================================="<<endl;
            cout<<"Masukkan Data Karyawan"<<endl;
            cout<<"Isi banyak data yang dimasukkan : ";
            cin>>jmlkarya;
            for(int a = 0;a < jmlkarya;a++){
                cout<<"\nMasukkan nama karyawan : ";
                cin>>nmkarya;
                cout<<"Masukkan password keryawan : ";
                cin>>passkarya;
                cout<<"Masukkan jam karja : ";
                cin>>jamkerja;
                cout<<"Masukkan gaji : ";
                cin>>gaji;
                push_tumpukan(nmkarya,passkarya,jamkerja,gaji);
            }
            keluar();
        }else{
            cout<<"Pilihan Tidak Tersedia"<<endl;
            keluar();
        }

        }while(tolower(yaTidak) != 'y');

    return 0;
}
