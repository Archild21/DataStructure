#include <iostream>

using namespace std;

char TidaknYa;
int bnykdata,pilih,pilihan,cacah;
string data_masuk;

struct linkstarto{
    string data;
    linkstarto* next;
};
linkstarto *head;
linkstarto *tail;
linkstarto *newsimpul;

void inisialisasi(){
    head = NULL;
    tail = NULL;
}

bool linkempty(){
    if(head == NULL){
        return true;
    }else{
        return false;
    }
}

void creatpul(string dataMasukkan){
    newsimpul = new linkstarto;
    newsimpul->data = dataMasukkan;
    newsimpul->next = NULL;
}

void addBack(string data_user){
    creatpul(data_user);
    if(linkempty()==true){
        head = newsimpul;
        tail = newsimpul;
        newsimpul->next = head;
    }else{
        while(tail->next != head){
            tail=tail->next;
        }tail->next = newsimpul;
        newsimpul->next = head;
    }
}

void addFront(string data_user){
    creatpul(data_user);
    if(linkempty() == true){
        head = newsimpul;
        tail = newsimpul;
        newsimpul->next = head;
    }else{
        while(tail->next != head){
            tail=tail->next;
        }newsimpul->next = head;
        head = newsimpul;
        tail->next = newsimpul;
    }
}

void delBack(){
    if(linkempty()==true){
        cout<<"Tidak ada data"<<endl;
    }else{
        linkstarto *helper;
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

void delFront(){
    if(linkempty()==true){
        cout<<"Tidak ada data"<<endl;
    }else{
        linkstarto *helper;
        helper = head;
        tail = head;
        if(helper->next == head){
            head = NULL;
        tail = NULL;
        delete helper;
        }else{
            while(tail->next != helper){
                tail = tail->next;
            }head = head->next;
            tail->next = head;
            helper->next = NULL;
            delete helper;
        }
    }
}

void tampilPul(){
    if(linkempty()==true){
        cout<<"Tidak ada data"<<endl;
    }else{
        tail = head;
        do{
        cout<<cacah + 1<<". "<<tail->data<<endl;
        tail = tail->next;
        cacah++;
        }while(tail != head);
        cacah = 0;
    }
}

bool keluar(char YesorNo){
    if(YesorNo != 'Y' && YesorNo != 'y'){
        return true;
    }else{
        return false;
    }
}

void Nkeluar(char YesorNo){
    cout<<"Keluar? (y/n)  : ";
    cin>>TidaknYa;
    if(keluar(YesorNo) == true){
        system("CLS");
    }else{
        cout<<"Bye"<<endl;
    }
}

int main() {
    do{
    cout<<"=============================="<<endl;
    cout<<"--------Linked Sirkuler-------"<<endl;
    cout<<"=============================="<<endl;
    cout<<"1. Create Data"<<endl;
    cout<<"2. Delete Data"<<endl;
    cout<<"3. Tampil Data"<<endl;
    cout<<"Masukkan pilihan ; ";
    cin>>pilih;
    switch(pilih){
    case 1 : system("CLS");
        cout<<"=============================="<<endl;
        cout<<"----------Tambah Data---------"<<endl;
        cout<<"=============================="<<endl;
        cout<<"1. Tambah Data di Depan"<<endl;
        cout<<"2. Tambah Data di Belakang"<<endl;
        cout<<"3. Keluar"<<endl;
        cout<<"Masukkan Pilihan : ";
        cin>>pilihan;
        if(pilihan == 1){
            cout<<"Masukkan banyak data : ";
            cin>>bnykdata;
            for(int x = 0; x < bnykdata;x++){
                cout<<"Masukkan Data : ";
                cin>>data_masuk;
                addFront(data_masuk);
            }Nkeluar(TidaknYa);
        }else if(pilihan == 2){
            cout<<"Masukkan banyak data : ";
            cin>>bnykdata;
            for(int x = 0; x < bnykdata;x++){
                cout<<"Masukkan Data : ";
                cin>>data_masuk;
                addBack(data_masuk);
            }Nkeluar(TidaknYa);
        }else if(pilihan == 3){
            Nkeluar(TidaknYa);
        }else{
            cout<<"Pilihan tidak tersedia"<<endl;
            Nkeluar(TidaknYa);
        }
        break;

    case 2 : system("CLS");
        cout<<"=============================="<<endl;
        cout<<"----------Hapus Data----------"<<endl;
        cout<<"=============================="<<endl;
        cout<<"1. Hapus Data di Depan"<<endl;
        cout<<"2. Hapus Data di Belakang"<<endl;
        cout<<"3. Keluar"<<endl;
        cout<<"Masukkan Pilihan : ";
        cin>>pilihan;
        if(pilihan == 1){
            cout<<"Masukkan banyak data yang akan dihapus : ";
            cin>>bnykdata;
            for(int x = 0; x < bnykdata;x++){
                delFront();
            }Nkeluar(TidaknYa);
        }else if(pilihan == 2){
            cout<<"Masukkan banyak data yang akan dihapus : ";
            cin>>bnykdata;
            for(int x = 0; x < bnykdata;x++){
                delBack();
            }Nkeluar(TidaknYa);
        }else if(pilihan == 3){
            Nkeluar(TidaknYa);
        }else{
            cout<<"Pilihan tidak tersedia"<<endl;
            Nkeluar(TidaknYa);
        }
        break;
    case 3 : system("CLS");
        cout<<"=============================="<<endl;
        cout<<"----------Tampil Data---------"<<endl;
        cout<<"=============================="<<endl;
        tampilPul();
        Nkeluar(TidaknYa);
        break;
    default :
        cout<<"Pilihan Tidak Tersedia"<<endl;
        cout<<"Keluar? (y/n)  : ";
        cin>>TidaknYa;
        Nkeluar(TidaknYa);
    }
}while(keluar(TidaknYa));
    return 0;
}
