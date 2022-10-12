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

    cout<<"Data sebelum diganti"<<endl;
    cout<<jumlah<<endl;
    cout<<negara<<endl;
    cout<<volume<<endl;
    cout<<sehat<<endl;

    *pjumlah = 191;
    *pnegara = "England";
    *pvolume = 0.125;
    *psehat = false;

    cout<<"\nData sesudah diganti"<<endl;
    cout<<jumlah<<endl;
    cout<<negara<<endl;
    cout<<volume<<endl;
    cout<<sehat<<endl;


    return 0;
}
