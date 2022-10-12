#include<iostream>

using namespace std;

int main(){

    int jumlah = 30;
    string negara = "Indonesia";
    float volume = 17.25;
    bool sehat = true;

    int* pjumlah = &jumlah;
    string* pnegara = &negara;
    float* pvolume = &volume;
    bool* psehat = &sehat;

    cout<<"Nilai pointer"<<endl;
    cout<<pjumlah<<endl;
    cout<<pnegara<<endl;
    cout<<pvolume<<endl;
    cout<<psehat<<endl;

    cout<<"\nNilai variabel"<<endl;
    cout<<*pjumlah<<endl;
    cout<<*pnegara<<endl;
    cout<<*pvolume<<endl;
    cout<<*psehat<<endl;

    return 0;
}
