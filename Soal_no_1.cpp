#include <iostream>
using namespace std;

bool pangkat(int n) {
    if (n <= 0) return false;
    return (n & (n - 1)) == 0;
}

int main() {
    system("cls");
    int kode;
    cout << "Kode: " ;
    cin >> kode;

    if (pangkat(kode))
        cout << "ya" << endl;
    else
        cout << "bukan" << endl;

}
