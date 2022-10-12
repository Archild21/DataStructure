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
buku dongeng;

int main(){
    cout<<"===========Input Buku============"<<endl;
    cout<<"Nama Buku : "; cin>>dongeng.nama_buku;
    cin.ignore();
    cout<<"Judul Buku : "; getline(cin,dongeng.judul_buku);
    cin.ignore();
    cout<<"Nama Pengarang : "; getline(cin,dongeng.pengarang);
    cout<<"Nama Penerbit  : "; getline(cin,dongeng.penerbit);
    cout<<"Tebal Buku : "; cin>>dongeng.tebal_halaman;
    cout<<"Harga Buku : "; cin>>dongeng.harga_buku;

    cout<<"Data Buku"<<endl;
    cout<<dongeng.nama_buku<<endl;
    cout<<dongeng.judul_buku<<endl;
    cout<<dongeng.pengarang<<endl;
    cout<<dongeng.penerbit<<endl;
    cout<<dongeng.tebal_halaman<<endl;
    cout<<dongeng.harga_buku<<endl;
    return 0;
}
