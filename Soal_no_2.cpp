#include <iostream>
using namespace std;

int main() {
    system("cls");
    string biner;

    cout << "input kode biner: ";
    cin >> biner;

    int desimal = 0;
    int pangkat = 1; 

    for (int i = biner.length() - 1; i >= 0; i--) {
        char digit = biner[i];

        
        if (digit != '0' && digit != '1') {
            cout << "Pesan rusak!" << endl;
            return 0;
        }

        if (digit == '1') {
            desimal += pangkat;
        }

        pangkat *= 2;
    }
    cout <<"Angka desimal dari biner " << biner << " adalah " << desimal;

}
