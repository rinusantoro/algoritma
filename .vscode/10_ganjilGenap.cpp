#include <iostream>
using namespace std;

int main() {
    int n;

    // Meminta input dari pengguna
    cout << "Masukkan batas angka: ";
    cin >> n;

    cout << "\nBilangan Ganjil: ";
    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) {
            cout << i << " ";
        }
    }

    cout << "\nBilangan Genap: ";
    int i = 1;
    while (i <= n){
        if (i % 2 == 0) {
            cout << i << " ";
        }

        i++;
    }

    cout << endl;
    return 0;
}
