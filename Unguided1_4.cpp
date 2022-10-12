#include<iostream>

using namespace std;

struct buku{
    string nama_buku;
    string judul_buku;
    string pengarang;
    string penerbit;
    int tebal_halaman;
    double harga_buku;
};
buku dongeng[5];

int jum,j;
char pilih,keluar;

int main(){
    cout<<"===========Input Buku============"<<endl;
    cout<<"Masukkan Banyak Buku : ";
    cin>>jum;
    for(int i = 0;i < jum;i++){
    cout<<"Nama Buku : "; cin>>dongeng[i].nama_buku;
    cout<<"Judul Buku : "; cin>>dongeng[i].judul_buku;
    cout<<"Nama Pengarang : "; cin>>dongeng[i].pengarang;
    cout<<"Nama Penerbit  : "; cin>>dongeng[i].penerbit;
    cout<<"Tebal Buku : "; cin>>dongeng[i].tebal_halaman;
    cout<<"Harga Buku : "; cin>>dongeng[i].harga_buku;
    cout<<"\n";
    }
    system("CLS");
    do{
    cout<<"=========== Buku============"<<endl;
    cout<<"Ingin Tampilkan Buku? (y/t) : ";
    cin>>pilih;
    if(pilih == 'y'){
        cout<<"Buku ke : ";
        cin>>j;
        cout<<"\nData Buku"<<endl;
        cout<<dongeng[j-1].nama_buku<<endl;
        cout<<dongeng[j-1].judul_buku<<endl;
        cout<<dongeng[j-1].pengarang<<endl;
        cout<<dongeng[j-1].penerbit<<endl;
        cout<<dongeng[j-1].tebal_halaman<<endl;
        cout<<dongeng[j-1].harga_buku<<endl;
    }else{
        cout<<"Keluar? (y/n)"<<endl;
        cin>>keluar;
    }
    }while(keluar != 'y');
    cout<<"Baik....Trima Kasih!"<<endl;
    return 0;
}
