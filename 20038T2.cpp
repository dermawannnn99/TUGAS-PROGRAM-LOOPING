#include <iostream>
using namespace std;

int main() {
    int pilihan;

    cout <<"==============================================================================="<<endl;
    cout <<"SELAMAT DATANG DI PROGRAM TUGAS MENAMPILKAN BILANGAN SESUAI JENIS JENIS LOOPING"<<endl;
    cout <<"==============================================================================="<<endl<<endl;

    cout << "PILIHLAH OPSI UNTUK MENAMPILKAN SESUAI PERINTAH :\n";
    cout << "1. Menampilkan bilangan ganjil <10 untuk Looping (FOR)\n";
    cout << "2. Menampilkan bilangan genap <10 untuk Looping (WHILE)\n";
    cout << "3. Menampilkan bilangan (kelipatan 3) <10 untuk Looping (DO-WHILE)\n"<<endl<<endl;
    cout << "Masukkan pilihan (1-3): ";
    cin >> pilihan;

    switch (pilihan) {
        case 1:
            cout<<"MENAMPILKAN BILANGAN GANJIL KURANG DARI 10 MEMAKAI LOOP FOR. :)"<<endl;
            cout<<"================================================================"<<endl<<endl;
            for (int i = 1; i < 10; i += 2) {
                cout << i << " ";
            }
            cout << endl;
            break;

        case 2:
            cout<<"MENAMPILKAN BILANGAN GENAP KURANG DARI 10 MEMAKAI LOOP WHILE. :)"<<endl;
            cout<<"================================================================"<<endl<<endl;
            int i;
            i = 2;
            while (i < 10) {
                cout << i << " ";
                i += 2;
            }
            cout << endl;
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
            cout << "Pilihan tidak valid. Silakan pilih antara 1-3." << endl;
    }

    return 0;

}
