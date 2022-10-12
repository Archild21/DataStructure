#include <iostream>

using namespace std;

string passkey = "21103077";
string pass;
string username = "nicodemus";
int pencacah = 1;
char Yesno;

bool keluar(char yatidak){
    if(yatidak == 'N' || yatidak == 'n'){
        return true;
    }else{
        return false;
    }
}

int main(){
    do{
    cout<<"==========================================="<<endl;
    cout<<"\t\tAplikasi IGrapel"<<endl;
    cout<<"==========================================="<<endl;
    cout<<"Akun Mahasiswa"<<endl;
    cout<<"Silahkan Masukkan Username : ";
    getline(cin,username);
    cout<<"Masukkan Password : ";
    cin>>pass;
    while(pass != passkey && pencacah <= 3){
    cout<<"(Kesempatan "<<pencacah<<")"<<" Password Anda : ";
    cin>>pass;
    pencacah++;
    }
    if(pass != passkey){
        cout<<"Maaf Anda Tidak Dapat Masuk..."<<endl;
    }else{
        cout<<"Anda Telah Masuk..."<<endl;
    }
    pencacah = 1;
    cout<<"Keluar?(y/n) : ";
    cin>>Yesno;
    keluar(Yesno);
    system("CLS");
}while(keluar(Yesno) != false);

    return 0;
}
