#include<iostream>
#include<time.h>

using namespace std;

string* pointer_dosensi;
string* p;

int main(){
    string dosen_si[] = {"Sisilia Thya Safitri","Citra Wiguna","Yogo Dwi Prasetyo","Cepi Ramdani",
    "Sarah Astiti","Hari Widi Utomo","Yoka Fathoni","Rona Nisa Sofia Amriza","Daniel Yeri Kristiyanto","Hutanti Setyodewi"};
    int b = sizeof(dosen_si)/sizeof(string);
    pointer_dosensi = dosen_si;
    cout<<"Memunculkan Nilai Pointer"<<endl;
    for(int a = 0;a < b;a++){
        cout<<&pointer_dosensi[a]<<endl;
    }
    cout<<"\nMemunculkan Nilai Variabel Dengan Pointer"<<endl;
    for(int a = 0;a < b;a++){
        cout<<pointer_dosensi[a]<<endl;
    }

    for(int a = 0;a < b;a++){
        int temp = rand()%b;
        string shuff = pointer_dosensi[a];
        pointer_dosensi[a] = pointer_dosensi[temp];
        pointer_dosensi[temp] = shuff;
    }
    cout<<"\nAcak Nilai Variabel Dengan Pointer"<<endl;
    for(int a = 0;a < b;a++){
        cout<<dosen_si[a]<<endl;
    }
    return 0;
}
