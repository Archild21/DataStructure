#include <iostream>

using namespace std;

int main(){

    bool benar = true;
    bool salah = false;
    bool nilaiKebenaran;

    nilaiKebenaran = benar||(salah&&!benar)||salah;
    cout<<"Nilai Kebenaran 1 : "<<nilaiKebenaran<<endl;

    nilaiKebenaran = benar||(!salah&&benar)||salah;
    cout<<"Nilai Kebenaran 2 : "<<nilaiKebenaran<<endl;
    return 0;
}

