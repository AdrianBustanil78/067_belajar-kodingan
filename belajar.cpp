
#include <iostream>
using namespace std;

int main() {
    int jumlahOrang;
    int umur;
    
    int anak = 0;
    int remaja = 0;
    int dewasa = 0;
    int lansia = 0;
    int totalUmur = 0;

#include <iostream>
using namespace std;

int main() {
    int jumlahOrang;
    int umur;
    
    int anak = 0;
    int remaja = 0;
    int dewasa = 0;
    int lansia = 0;
    int totalUmur = 0;

    cout << "==================================" << endl;
    cout << " PROGRAM KLASIFIKASI UMUR " << endl;
    cout << "==================================" << endl;

    cout << "Masukkan jumlah orang: ";
    cin >> jumlahOrang;

    for (int i = 1; i <= jumlahOrang; i++) {
        cout << "Masukkan umur orang ke-" << i << ": ";
        cin >> umur;

        totalUmur += umur;

        if (umur >= 0 && umur <= 12) {
            anak++;
        }
        else if (umur >= 13 && umur <= 17) {
            remaja++;
        }
        else if (umur >= 18 && umur <= 59) {
            dewasa++;
        }
        else if (umur >= 60) {
            lansia++;
        }
        else {
            cout << "Umur tidak valid!" << endl;
            totalUmur -= umur;
            i--;
        }
    }

 