#include <iostream>
using namespace std;
struct dlinkedlist{
 dlinkedlist *prev;
 string data;
 dlinkedlist *next;
};
dlinkedlist *head;
dlinkedlist *tail;
dlinkedlist *vertex;
void inisialisasi(){
 head = NULL;
 tail = NULL;
}
bool dLinkKosong(){
 if(head == NULL && tail == NULL){
 return true;
 }else{
 return false;
 } }
void tambahDepan(string dataUser){
 if(dLinkKosong() == true){
 vertex = new dlinkedlist;
 vertex->data = dataUser;
 vertex->prev = NULL;
 vertex->next = NULL;
 head = vertex;
 tail = vertex;
 }else{
 vertex = new dlinkedlist;
 vertex->data = dataUser;
 vertex->prev = NULL;
 vertex->next = NULL;
 vertex->next = head;
 head->prev = vertex;
 head = vertex;
 }
}
void tambahBelakang(string dataUser){
 if(dLinkKosong()== true){
 vertex = new dlinkedlist;
 vertex->data = dataUser;
 vertex->prev = NULL;
 vertex->next = NULL;
 head = vertex;
 tail = vertex;
 }else{
 vertex = new dlinkedlist;
 vertex->data = dataUser;
 vertex->prev = NULL;
 vertex->next = NULL;
 tail->next = vertex;
 vertex->prev = tail;
 tail = vertex;
 } }
void hapusDepan(){
 if(dLinkKosong() == true){
 cout<<"Kosong...!!!"<<endl;
 }else{
 dlinkedlist *helper;
 helper = head;
 if(head == tail){
 head = NULL;
 tail = NULL;
 delete helper;
 }else{
 head = head->next;
 head->prev = NULL;
 helper->next = NULL;
 delete helper;
 }
 } }
void hapusBelakang(){
 if(dLinkKosong() == true){
 cout<<"Kosong...!!!"<<endl;
 }else{
 if(head == tail){
 dlinkedlist *helper;
 helper = head;
 head = NULL;
 tail = NULL;
 delete helper;
 }else{
 dlinkedlist *helper;
 helper = tail;
 tail = tail->prev;
 tail->next = NULL;
 helper->prev = NULL;
 delete helper;
 }
 } }
void tampilData(){
 if(dLinkKosong() == true){
 cout<<"Kosong...!!!"<<endl;
 }else{
 dlinkedlist *helper;
 helper = head;
 while(helper != NULL){
 cout<<helper->data<<" ";
 helper = helper->next;
 }
 } }
int main (){
 int pilihan;
 char keluar;
 string data_masukkan;
 do{
 cout<<"\tDouble Linked List Non Circular"<<endl<<endl;
 cout<<"1. Tambah depan"<<endl;
 cout<<"2. Tambah belakang"<<endl;
 cout<<"3. Hapus depan"<<endl;
 cout<<"4. Hapus belakang"<<endl;
 cout<<"5. Tampil data"<<endl;
 cout<<"6. Keluar"<<endl;
 cout<<"Silahkan pilih (1-6) : ";
 cin>>pilihan;
 switch(pilihan){
 case 1:
 cout<<"Silahkan masukkan data : ";
 cin>>data_masukkan;
 tambahDepan(data_masukkan);
 cout<<"Keluar ? (y/t) : ";
 cin>>keluar;
 if(keluar == 'y'){
 pilihan = 0;
 }else{
 system("cls");
 }
 break;
 case 2:
 cout<<"Silahkan masukkan data : ";
 cin>>data_masukkan;
 tambahBelakang(data_masukkan);
 cout<<"Keluar ? (y/t) : ";
 cin>>keluar;
 if(keluar == 'y'){
 pilihan = 0;
 }else{
 system("cls");
 }
 break;
 case 3:
 hapusDepan();
 cout<<"Keluar ? (y/t) : ";
 cin>>keluar;
 if(keluar == 'y'){
 pilihan = 0;
 }else{
 system("cls");
 }
 break;
 case 4:
 hapusBelakang();
 cout<<"Keluar ? (y/t) : ";
 cin>>keluar;
 if(keluar == 'y'){
 pilihan = 0;
 }else{
 system("cls");
 }
 break;
 case 5:
 tampilData();
 cout<<endl;
 cout<<"Keluar ? (y/t) : ";
 cin>>keluar;
 if(keluar == 'y'){
 pilihan = 0;
 }else{
 system("cls");
 }
 break;
 case 6:
 cout<<"Yakin ingin keluar (y/t)? : ";
 cin>>keluar;
 if(keluar == 'y'){
 pilihan = 0;
 }else{
 system("cls");
 }
 break;
 default:
 cout<<"Pilihan tidak tersedia..."<<endl<<endl;
 cout<<"Keluar ? (y/t) : ";
 cin>>keluar;
 if(keluar == 'y'){
 pilihan = 0;
 }else{
 system("cls");
 }
 }
 }while(pilihan != 0);
 return 0;
}
