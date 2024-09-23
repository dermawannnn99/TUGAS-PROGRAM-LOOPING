#include <iostream>
using namespace std;

    int main () {
        int pilihan;

            cout<<"Pilihlah jenis loop yang ingin di jalankan"<<endl;
            cout<<"1. Menampilkan bilangan ganjil < 10 dengan FOR"<<endl;
            cout<<"2. Menampilkan bilangan genap < 10 dengan WHILE"<<endl;
            cout<<"3. Menampilkan bilangan (kelipatan 3) < 10 dengan DO-WHILE"<<endl<<endl;
            cout<<"Pilih angka (1-3) : ";
            cin>>pilihan;

        switch (pilihan) {
        case 1:
            cout<<"MENAMPILKAN BILANGAN GANJIL KURANG DARI 10 MEMAKAI LOOP FOR. :)"<<endl;
            cout<<"================================================================"<<endl<<endl;

                for (int i = 1; i < 10; i+=2) {
                cout<< i <<" "<<endl;
                }
            break;

        case 2:
            cout<<"MENAMPILKAN BILANGAN GENAP KURANG DARI 10 MEMAKAI LOOP WHILE. :)"<<endl;
            cout<<"================================================================"<<endl<<endl;

                int j = 2;
                while (j < 10){
                cout<< j <<" "<<endl;
                j +=2;
                }
            break;

        case 3:
            cout<<"MENAMPILKAN BILANGAN KELIPATAN 3 KURANG DARI 10 MEMAKAI LOOP DO WHILE. :)"<<endl;
            cout<<"================================================================"<<endl<<endl;

            i = 3;
            do {
                cout << i << " ";
                i += 3;
            } while (i < 10);
            cout << endl;
            break;

        default:
            cout<<"ANGKA TIDAK VALID!"<<endl;
            break;
        }

        return 0;
    }
