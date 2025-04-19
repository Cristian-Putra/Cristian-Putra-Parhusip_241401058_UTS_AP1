#include <iostream>
using namespace std;

int main() {
    system("cls");
    string nama;
    int nim;
    int ap, pds, so;
    float rataRata;

    cout << "Nama Mahasiswa: ";
    getline(cin, nama);

    cout << "NIM: ";
    cin >> nim;

    cout << "Nilai Mata Kuliah:\n";
    cout << "Algoritma dan Pemrograman: ";
    cin >> ap;
    cout << "Probabilitas dan Statistika: ";
    cin >> pds;
    cout << "Sistem Operasi: ";
    cin >> so;

    rataRata = (ap + pds + so) / 3.0;

    cout << "\n----- Hasil Penilaian -----\n";
    cout << "Nama Mahasiswa: " << nama << endl;
    cout << "NIM: " << nim << endl;
    cout << "Nilai rata-rata semester ini: " << rataRata << endl;
    
    cout << "====================================\n";
    if (ap >= 70)
        cout << "Algoritma dan Pemrograman: Lulus" << endl;
    else
        cout << "Algoritma dan Pemrograman: Tidak Lulus, Silakan ulangi di tahun depan";
    
    if (pds >= 70)
        cout << "Probabilitas dan Statistika: Lulus" << endl;
    else 
        cout<< "Probabilitas dan Statistika : Tidak Lulus, Silakan ulangi di tahun depan";
        
     if (so >= 70)
        cout << "Nilai Sistem Operasi: Lulus";
    else 
        cout <<"Nilai Sistem Operasi : Tidak Lulus, Silakan ulangi di tahun depan";
    cout << "\n====================================\n";

}
