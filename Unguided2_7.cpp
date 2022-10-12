#include <iostream>

using namespace std;

struct linkedlist{
    linkedlist* before;
    string data;
    linkedlist* next;
};
linkedlist* head;
linkedlist* tail;
linkedlist* simpul;

void buat_simpul(string data_masukkan){
    simpul = new linkedlist;
    simpul->before = NULL;
    simpul->data = data_masukkan;
    simpul->next = NULL;
}

void inisialisasi(){
    head = NULL;
    tail = NULL;
}

bool simpul_kosong(){
    if(head == NULL && tail == NULL){
        return true;
    }else{
        return false;
        }
}

void tambah_belakang(string data_user){
    if(simpul_kosong() == true){
        buat_simpul(data_user);
        head = simpul;
        tail = simpul;
    }else{
        simpul = new linkedlist;
        simpul->data = data_user;
        simpul->before = head;
        tail->next = simpul;
        tail = simpul;
    }
}

void tambah_depan(string data_user){
    if(simpul_kosong() == true){
        buat_simpul(data_user);
        head = simpul;
        tail = simpul;
    }else{
        buat_simpul(data_user);
        simpul->next = head;
        head->before = simpul;
        head = simpul;
    }
}

void tampil_data(){
    if(simpul_kosong()==true){
        cout<<"Tidak ada data"<<endl;
    }else{
        linkedlist* helper;
        helper = head;
        while(helper != NULL){
            cout<<helper->data<<" ";
        helper=helper->next;
        }
    }
}

int main(){

    inisialisasi();
    tambah_depan("Rabu");
    tambah_belakang("Kamis");
    tambah_depan("Selasa");
    tampil_data();

    return 0;
}
