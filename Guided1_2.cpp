#include<iostream>

using namespace std;

int main(){

    int jumlah = 30;
    string negara = "Indonesia";
    float volume = 17.25;
    bool sehat = true;

    cout<<"Alamat jumlah "<<&jumlah<<endl;
    cout<<"Alamat negara "<<&negara<<endl;
    cout<<"Alamat volume "<<&volume<<endl;
    cout<<"Alamat sehat "<<&sehat<<endl;

    return 0;
}
