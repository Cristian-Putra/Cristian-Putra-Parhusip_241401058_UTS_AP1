#include <iostream>
using namespace std;

int main() {
    system("cls");
    string mantra;
    int i = 0, jumlahVokal = 0;

    cout << "Masukkan Mantra: ";
    getline(cin, mantra);

    while (i < mantra.length()) {
        char c = tolower(mantra[i]);
        if (c == 'a' || c == 'i' || c == 'u' || c == 'e' || c == 'o') {
            jumlahVokal++;
        }
        i++;
    }

    if (jumlahVokal > 0) {
        cout << "Kekuatan mantra: " << jumlahVokal << " vokal" << endl;
    } else {
        cout << "Mantra tidak valid! Tidak mengandung vokal." << endl;
    }

}
