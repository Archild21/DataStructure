#include <iostream>

using namespace std;

int main(){
    int a,b;
    string c;
    double d;
    bool e;
    a = 22;
    b = 7;
    c = "c";
    d = 3.14;
    e = true;
    cout<<"integral casting"<<endl;
    cout<<"integral to float : "<<(float)a/b<<endl;
    cout<<"integral to character : "<<(char)a/b<<endl;
    cout<<"integral to boolean : "<<(bool)a/b<<endl;

    cout<<"\ndouble casting"<<endl;
    cout<<"double to integral : "<<(int)d<<endl;
    cout<<"double to boolean : "<<(bool)d<<endl;
    cout<<"double to character : "<<(char)d<<endl;

    cout<<"\ncharacter casting"<<endl;
    cout<<"null"<<endl;

    cout<<"\nstring casting"<<endl;
    cout<<"null"<<endl;

    cout<<"\nboolean casting"<<endl;
    cout<<"boolean to integral : "<<(int)e<<endl;
    cout<<"boolean to boolean : "<<(bool)e<<endl;
    cout<<"boolean to character : "<<(char)e<<endl;


    return 0;
}
