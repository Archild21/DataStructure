#include<iostream>

using namespace std;

struct hewan{
    string namaHewan;
    string jenisKelamin;
    string caraBerkembangbiak;
    string alatPernafasan;
    string tempatHidup;
    bool karnivora = true;
};

struct{
    hewan darat;
    int jumlahKaki;
    bool menyusui = true;
    string suara;
}hewanDarat;

struct{
    hewan laut;
    string bentukSirip;
    string bentukPertahananDiri;
}hewan_laut;

string pilih;
char ys;

int main(){
    cout<<"Pilih Jenis Hewan(darat/laut) : ";
    cin>>pilih;
    cout<<"\nMasukkan Data Hewan"<<endl;
    if(pilih == "darat"){
         cout<<"Nama Hewan : ";
         cin>>hewanDarat.darat.namaHewan;
         cout<<"Jenis Kelamin Hewan : ";
         cin>>hewanDarat.darat.namaHewan;
         cout<<"Cara Berkembangbiak Hewan : ";
         cin>>hewanDarat.darat.caraBerkembangbiak;
         cout<<"Alat Pernapasaan Hewan : ";
         cin>>hewanDarat.darat.alatPernafasan;
         cout<<"Tempat Hidup Hewan : ";
         cin>>hewanDarat.darat.tempatHidup;
         cout<<"Hewan termasuk karnivora? (y/n): ";
         cin>>ys;
            if(ys == 'y'){
                hewanDarat.darat.karnivora = true;
            }else{
                hewanDarat.darat.karnivora = false;
            };

            if(hewanDarat.darat.karnivora == true){
                cout<<"karnivora"<<endl;
            }else{
                cout<<"bukan karnivora"<<endl;
            };
         cout<<"Jumlah Kaki Hewan : ";
         cin>>hewanDarat.jumlahKaki;
         cout<<"Hewan menyusui? (y/n) : ";
         cin>>ys;
         if(ys == 'y'){
                hewanDarat.menyusui = true;
            }else{
                hewanDarat.menyusui = false;
            };

            if(hewanDarat.menyusui == true){
                cout<<"menyusui"<<endl;
            }else{
                cout<<"tidak menyusui"<<endl;
            };
         cout<<"Suara Hewan : ";
         cin>>hewanDarat.suara;
    }else{
         cout<<"Nama Hewan : ";
         cin>>hewan_laut.laut.namaHewan;
         cout<<"Jenis Kelamin Hewan : ";
         cin>>hewan_laut.laut.jenisKelamin;
         cout<<"Cara Berkembangbiak Hewan : ";
         cin>>hewan_laut.laut.caraBerkembangbiak;
         cout<<"Alat Pernapasaan Hewan : ";
         cin>>hewan_laut.laut.alatPernafasan;
         cout<<"Tempat Hidup Hewan : ";
         cin>>hewan_laut.laut.tempatHidup;
         cout<<"Hewan termasuk karnivora? (y/n): ";
         cin>>ys;
            if(ys == 'y'){
                hewan_laut.laut.karnivora = true;
            }else{
                hewan_laut.laut.karnivora = false;
            };

            if(hewan_laut.laut.karnivora == true){
                cout<<"karnivora"<<endl;
            }else{
                cout<<"bukan karnivora"<<endl;
            };
         cout<<"Bentuk Sirip : ";
         cin>>hewan_laut.bentukSirip;
         cout<<"Bentuk Pertahanan Diri : ";
         cin>>hewan_laut.bentukPertahananDiri;
    };
    return 0;
}
