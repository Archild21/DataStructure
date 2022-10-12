#include <iostream>

using namespace std;

int beratBadan[5] = {80, 131, 155, 98, 173};
int *pointerBeratBadanA;
int *pointerBeratBadanB;

int main(){
    pointerBeratBadanB = beratBadan;
    pointerBeratBadanA = pointerBeratBadanB;

    cout<<"pointerBeratBadanB        = "<<pointerBeratBadanB<<endl;
    cout<<"pointerBeratBadanB + 1    = "<<pointerBeratBadanB + 1<<endl;
    cout<<"*pointerBeratBadanB       = "<<*pointerBeratBadanB<<endl;
    cout<<"*pointerBeratBadanB + 1   = "<<*pointerBeratBadanB + 1<<endl;
    cout<<"*(pointerBeratBadanB + 1) = "<<*(pointerBeratBadanB + 1)<<endl;

    *(pointerBeratBadanB + 1) = 109;
    cout<<"*(pointerBeratBadanB + 1) = "<<*(pointerBeratBadanB + 1)<<endl;
    return 0;
}
