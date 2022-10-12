#include <iostream>

using namespace std;

int main(){
    int a = 3;
    int *b =&a;
    cout<<"Memunculkan nilai pada pointer : "<<*b<<endl;
    cout<<"Alamat variabel : "<<b<<endl;
    *b = 12;
    cout<<"Mengubah nilai dengan pointer : "<<"alamat : "<<b<<" ubah 12 ke 3 : "<<a<<endl;
    return 0;
}
