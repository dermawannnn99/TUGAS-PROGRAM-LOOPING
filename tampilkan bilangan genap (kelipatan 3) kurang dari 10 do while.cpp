#include <iostream>
using namespace std;

    int main () {
    int i = 0;

    cout<<"MENAMPILKAN BILANGAN KELIPATAN 3 KURANG DARI 10 MEMAKAI LOOP DO WHILE. :)"<<endl;
    cout<<"==========================================================================="<<endl<<endl;

    do {
        cout<< i <<" "<<endl;
        i+= 3;
    }
    while ( i < 10 );

    return 0;
    }
