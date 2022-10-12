#include <iostream>
#include <windows.h>
#include <conio.h>

using namespace std;

char yaTidak;
int pilihan,pilihwahana,jml;
string data_masuk;
const int maks_tongset = 25;
const int maks_rumhan = 10;
const int maks_bingla = 35;
const int maks_baknyu = 15;

struct antrian{
    int depan[4];
    int belakang[4];
    string nama_tongset[maks_tongset];
    string nama_rumhan[maks_rumhan];
    string nama_bingla[maks_bingla];
    string nama_baknyu[maks_baknyu];
}
wahana;


void nilai_awal(){
    for(int a = 0;a < 4;a++){
        wahana.depan[a] = -1;
        wahana.belakang[a] = -1;
    }
}

bool tongset_full(){
    if(wahana.belakang[0] == maks_tongset-1){
        return true;
    }else{
        return false;
    }
}

bool rumhan_full(){
    if(wahana.belakang[1] == maks_rumhan-1){
        return true;
    }else{
        return false;
    }
}

bool bingla_full(){
    if(wahana.belakang[2] == maks_bingla-1){
        return true;
    }else{
        return false;
    }
}

bool baknyu_full(){
    if(wahana.belakang[3] == maks_baknyu-1){
        return true;
    }else{
        return false;
    }
}


bool tongset_empty(){
    if(wahana.depan[0] == -1 && wahana.belakang[0] == -1){
        return true;
    }else{
        return false;
    }
}

bool rumhan_empty(){
    if(wahana.depan[1] == -1 && wahana.belakang[1] == -1){
        return true;
    }else{
        return false;
    }
}
bool bingla_empty(){
    if(wahana.depan[2] == -1 && wahana.belakang[2] == -1){
        return true;
    }else{
        return false;
    }
}
bool baknyu_empty(){
    if(wahana.depan[3] == -1 && wahana.belakang[3] == -1){
        return true;
    }else{
        return false;
    }
}

void enqueue_tongset(string dataMasukkan){
    if(tongset_empty() == true){
        wahana.depan[0] = 0;
        wahana.belakang[0] = 0;
        wahana.nama_tongset[wahana.belakang[0]] = dataMasukkan;
    }else if(tongset_full() == false){
        wahana.belakang[0]++;
        wahana.nama_tongset[wahana.belakang[0]] = dataMasukkan;
    }else{
        cout<<"Antrian sudah penuh"<<endl;
    }
}
void dequeue_tongset(){
    if(tongset_empty() == false){
        if(wahana.belakang[0] >= 9){
            for(int x = 9;x >= wahana.depan[0];x--){
                for(int y = x; y <= wahana.belakang[0]; y++){
                    wahana.nama_tongset[y] = wahana.nama_tongset[y+1];
                }
            }wahana.belakang[0] = wahana.belakang[0] - 10;
            cout<<"Penumpang Telah Masuk"<<endl;
                if(wahana.belakang[0] == -1){
                    wahana.depan[0] = -1;
                }
            }else{
                cout<<"Kursi Masih Tersisa"<<endl;
            }
        }else{
        cout<<"Kursi Kosong"<<endl;
    }
}

void tampil_tongset(){
    if(tongset_empty() == false){
        for(int z = wahana.depan[0]; z <= wahana.belakang[0]; z++){
            cout<<z + 1<<". "<<wahana.nama_tongset[z]<<endl;
        }cout<<endl;
    }else{
        cout<<"Tidak ada data pada antrian"<<endl;
    }
}

void enqueue_rumhan(string dataMasukkan){
    if(rumhan_empty() == true){
        wahana.depan[1] = 0;
        wahana.belakang[1] = 0;
        wahana.nama_rumhan[wahana.belakang[1]] = dataMasukkan;
    }else if(rumhan_full() == false){
        wahana.belakang[1]++;
        wahana.nama_rumhan[wahana.belakang[1]] = dataMasukkan;
    }else{
        cout<<"Antrian sudah penuh"<<endl;
    }
}
void dequeue_rumhan(){
    if(rumhan_empty() == false){
        if(wahana.belakang[1] >= 1){
            for(int x = 1;x >= wahana.depan[1];x--){
                for(int y = x; y <= wahana.belakang[1]; y++){
                    wahana.nama_rumhan[y] = wahana.nama_rumhan[y+1];
                }
            }wahana.belakang[1] = wahana.belakang[1] - 2;
            cout<<"Penumpang Telah Masuk"<<endl;
                if(wahana.belakang[1] == -1){
                    wahana.depan[1] = -1;
                }
            }else{
                cout<<"Kursi Masih Tersisa"<<endl;
            }
        }else{
        cout<<"Kursi Kosong"<<endl;
    }
}

void tampil_rumhan(){
    if(rumhan_empty() == false){
        for(int z = wahana.depan[1]; z <= wahana.belakang[1]; z++){
            cout<<z + 1<<". "<<wahana.nama_rumhan[z]<<endl;
        }cout<<endl;
    }else{
        cout<<"Tidak ada data pada antrian"<<endl;
    }
}

void enqueue_bingla(string dataMasukkan){
    if(bingla_empty() == true){
        wahana.depan[2] = 0;
        wahana.belakang[2] = 0;
        wahana.nama_bingla[wahana.belakang[2]] = dataMasukkan;
    }else if(bingla_full() == false){
        wahana.belakang[2]++;
        wahana.nama_bingla[wahana.belakang[2]] = dataMasukkan;
    }else{
        cout<<"Antrian sudah penuh"<<endl;
    }
}
void dequeue_bingla(){
    if(bingla_empty() == false){
        if(wahana.belakang[2] >= 14){
            for(int x = 14;x >= wahana.depan[2];x--){
                for(int y = x; y <= wahana.belakang[2]; y++){
                    wahana.nama_bingla[y] = wahana.nama_bingla[y+1];
                }
            }wahana.belakang[2] = wahana.belakang[2] - 15;
            cout<<"Penumpang Telah Masuk"<<endl;
                if(wahana.belakang[2] == -1){
                    wahana.depan[2] = -1;
                }
            }else{
                cout<<"Kursi Masih Tersisa"<<endl;
            }
        }else{
        cout<<"Kursi Kosong"<<endl;
    }
}

void tampil_bingla(){
    if(bingla_empty() == false){
        for(int z = wahana.depan[2]; z <= wahana.belakang[2]; z++){
            cout<<z + 1<<". "<<wahana.nama_bingla[z]<<endl;
        }cout<<endl;
    }else{
        cout<<"Tidak ada data pada antrian"<<endl;
    }
}

void enqueue_baknyu(string dataMasukkan){
    if(baknyu_empty() == true){
        wahana.depan[3] = 0;
        wahana.belakang[3] = 0;
        wahana.nama_baknyu[wahana.belakang[3]] = dataMasukkan;
    }else if(baknyu_full() == false){
        wahana.belakang[3]++;
        wahana.nama_baknyu[wahana.belakang[3]] = dataMasukkan;
    }else{
        cout<<"Antrian sudah penuh"<<endl;
    }
}
void dequeue_baknyu(){
    if(baknyu_empty() == false){
        if(wahana.belakang[3] >= 4){
            for(int x = 4;x >= wahana.depan[3];x--){
                for(int y = x; y <= wahana.belakang[3]; y++){
                    wahana.nama_baknyu[y] = wahana.nama_baknyu[y+1];
                }
            }wahana.belakang[3] = wahana.belakang[3] - 5;
            cout<<"Penumpang Telah Masuk"<<endl;
                if(wahana.belakang[3] == -1){
                    wahana.depan[3] = -1;
                }
            }else{
                cout<<"Kursi Masih Tersisa"<<endl;
            }
        }else{
        cout<<"Kursi Kosong"<<endl;
    }
}

void tampil_baknyu(){
    if(baknyu_empty() == false){
        for(int z = wahana.depan[3]; z <= wahana.belakang[3]; z++){
            cout<<z + 1<<". "<<wahana.nama_baknyu[z]<<endl;
        }cout<<endl;
    }else{
        cout<<"Tidak ada data pada antrian"<<endl;
    }
}

bool keluar(char accex){
    if(accex == 'y' || accex == 'Y'){
        return true;
    }else{
        return false;
    }
}



int main(){
    nilai_awal();
    do{
    cout<<"\t"<<"Wahana Pasar Night"<<endl;
    cout<<"1. Tong Setan"<<endl;
    cout<<"2. Rumah Hantu"<<endl;
    cout<<"3. Bianglala"<<endl;
    cout<<"4. Ombak Banyu"<<endl;
    cout<<"Silahkan pilih (1-4) : ";
    cin>>pilihwahana;

    if(pilihwahana == 1){
        system("CLS");
        cout<<"==============Tong Setan=============="<<endl;
        cout<<"1. Masukkan Nama Penumpang"<<endl;
        cout<<"2. Keluarkan Nama Penumpang"<<endl;
        cout<<"3. Tampilkan Nama Penumpang"<<endl;
        cout<<"4. Keluar"<<endl;
        cout<<"Masukkan Pilihan (1-4) : ";
        cin>>pilihan;
        switch(pilihan){
            case 1 :
            cout<<"Masukkan banyak penumpang : ";
            cin>>jml;
            for(int z = 0;z < jml;z++){
                cout<<"Masukkan Nama Penumpang : ";
                cin>>data_masuk;
                enqueue_tongset(data_masuk);
            }cout<<endl;
            cout<<"Keluar (y/t) ? ";
            cin>>yaTidak;
            if(keluar(yaTidak) == true){
                cout<<" Terima kasih"<<endl;
            }else{
                system("cls");
            }
        break;
            case 2 :
            dequeue_tongset();
            cout<<"Keluar (y/t) ? ";
            cin>>yaTidak;
            if(keluar(yaTidak) == true){
                cout<<" Terima kasih"<<endl;
            }else{
                system("cls");
            }
        break;
            case 3 :
            tampil_tongset();
            cout<<"Keluar (y/t) ? ";
            cin>>yaTidak;
            if(keluar(yaTidak) == true){
                cout<<" Terima kasih"<<endl;
            }else{
                system("cls");
            }
        break;
            case 4 :
            cout<<"Keluar (y/t) ? ";
            cin>>yaTidak;
            if(keluar(yaTidak) == true){
                cout<<" Terima kasih"<<endl;
            }else{
                system("cls");
            }
        break;
            default :
            cout<<"Pilihan tidak tersedia..."<<endl;
            cout<<"Keluar (y/t) ? ";
            cin>>yaTidak;
            if(keluar(yaTidak) == true){
                cout<<" Terima kasih"<<endl;
            }else{
                system("cls");
            }
        }
    }else if(pilihwahana == 2){
        system("CLS");
        cout<<"=============Rumah Hantu=============="<<endl;
        cout<<"1. Masukkan Nama Penumpang"<<endl;
        cout<<"2. Keluarkan Nama Penumpang"<<endl;
        cout<<"3. Tampilkan Nama Penumpang"<<endl;
        cout<<"4. Keluar"<<endl;
        cout<<"Masukkan Pilihan (1-4) : ";
        cin>>pilihan;
        switch(pilihan){
            case 1 :
            cout<<"Masukkan banyak penumpang : ";
            cin>>jml;
            for(int z = 0;z < jml;z++){
                cout<<"Masukkan Nama Penumpang : ";
                cin>>data_masuk;
                enqueue_rumhan(data_masuk);
            }cout<<endl;
            cout<<"Keluar (y/t) ? ";
            cin>>yaTidak;
            if(keluar(yaTidak) == true){
                cout<<" Terima kasih"<<endl;
            }else{
                system("cls");
            }
        break;
            case 2 :
            dequeue_rumhan();
            cout<<"Keluar (y/t) ? ";
            cin>>yaTidak;
            if(keluar(yaTidak) == true){
                cout<<" Terima kasih"<<endl;
            }else{
                system("cls");
            }
        break;
            case 3 :
            tampil_rumhan();
            cout<<"Keluar (y/t) ? ";
            cin>>yaTidak;
            if(keluar(yaTidak) == true){
                cout<<" Terima kasih"<<endl;
            }else{
                system("cls");
            }
        break;
            case 4 :
            cout<<"Keluar (y/t) ? ";
            cin>>yaTidak;
            if(keluar(yaTidak) == true){
                cout<<" Terima kasih"<<endl;
            }else{
                system("cls");
            }
        break;
            default :
            cout<<"Pilihan tidak tersedia..."<<endl;
            cout<<"Keluar (y/t) ? ";
            cin>>yaTidak;
            if(keluar(yaTidak) == true){
                cout<<" Terima kasih"<<endl;
            }else{
                system("cls");
            }
        }
    }else if(pilihwahana == 3){
        system("CLS");
        cout<<"===============Bianglala=============="<<endl;
        cout<<"1. Masukkan Nama Penumpang"<<endl;
        cout<<"2. Keluarkan Nama Penumpang"<<endl;
        cout<<"3. Tampilkan Nama Penumpang"<<endl;
        cout<<"4. Keluar"<<endl;
        cout<<"Masukkan Pilihan (1-4) : ";
        cin>>pilihan;
        switch(pilihan){
            case 1 :
            cout<<"Masukkan banyak penumpang : ";
            cin>>jml;
            for(int z = 0;z < jml;z++){
                cout<<"Masukkan Nama Penumpang : ";
                cin>>data_masuk;
                enqueue_bingla(data_masuk);
            }cout<<endl;
            cout<<"Keluar (y/t) ? ";
            cin>>yaTidak;
            if(keluar(yaTidak) == true){
                cout<<" Terima kasih"<<endl;
            }else{
                system("cls");
            }
        break;
            case 2 :
            dequeue_bingla();
            cout<<"Keluar (y/t) ? ";
            cin>>yaTidak;
            if(keluar(yaTidak) == true){
                cout<<" Terima kasih"<<endl;
            }else{
                system("cls");
            }
        break;
            case 3 :
            tampil_bingla();
            cout<<"Keluar (y/t) ? ";
            cin>>yaTidak;
            if(keluar(yaTidak) == true){
                cout<<" Terima kasih"<<endl;
            }else{
                system("cls");
            }
        break;
            case 4 :
            cout<<"Keluar (y/t) ? ";
            cin>>yaTidak;
            if(keluar(yaTidak) == true){
                cout<<" Terima kasih"<<endl;
            }else{
                system("cls");
            }
        break;
            default :
            cout<<"Pilihan tidak tersedia..."<<endl;
            cout<<"Keluar (y/t) ? ";
            cin>>yaTidak;
            if(keluar(yaTidak) == true){
                cout<<" Terima kasih"<<endl;
            }else{
                system("cls");
            }
        }
    }else if(pilihwahana == 4){
        system("CLS");
        cout<<"=============Ombak banyu=============="<<endl;
        cout<<"1. Masukkan Nama Penumpang"<<endl;
        cout<<"2. Keluarkan Nama Penumpang"<<endl;
        cout<<"3. Tampilkan Nama Penumpang"<<endl;
        cout<<"4. Keluar"<<endl;
        cout<<"Masukkan Pilihan (1-4) : ";
        cin>>pilihan;
        switch(pilihan){
            case 1 :
            cout<<"Masukkan banyak penumpang : ";
            cin>>jml;
            for(int z = 0;z < jml;z++){
                cout<<"Masukkan Nama Penumpang : ";
                cin>>data_masuk;
                enqueue_baknyu(data_masuk);
            }cout<<endl;
            cout<<"Keluar (y/t) ? ";
            cin>>yaTidak;
            if(keluar(yaTidak) == true){
                cout<<" Terima kasih"<<endl;
            }else{
                system("cls");
            }
        break;
            case 2 :
            dequeue_baknyu();
            cout<<"Keluar (y/t) ? ";
            cin>>yaTidak;
            if(keluar(yaTidak) == true){
                cout<<" Terima kasih"<<endl;
            }else{
                system("cls");
            }
        break;
            case 3 :
            tampil_baknyu();
            cout<<"Keluar (y/t) ? ";
            cin>>yaTidak;
            if(keluar(yaTidak) == true){
                cout<<" Terima kasih"<<endl;
            }else{
                system("cls");
            }
        break;
            case 4 :
            cout<<"Keluar (y/t) ? ";
            cin>>yaTidak;
            if(keluar(yaTidak) == true){
                cout<<" Terima kasih"<<endl;
            }else{
                system("cls");
            }
        break;
            default :
            cout<<"Pilihan tidak tersedia..."<<endl;
            cout<<"Keluar (y/t) ? ";
            cin>>yaTidak;
            if(keluar(yaTidak) == true){
                cout<<" Terima kasih"<<endl;
            }else{
                system("cls");
            }
        }
    }else{
        cout<<"Pilihan tidak tersedia"<<endl;
        getch();
    }system("CLS");
    }while(keluar(yaTidak) == false);
return 0;
}
