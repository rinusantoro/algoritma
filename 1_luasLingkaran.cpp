#include <iostream>
using namespace std;

const float PI = 3.14;

int main() {
    float r, L;

    cout << "Masukkan jari-jari lingkaran: ";
    cin >> r;

    // Menghitung luas lingkaran
    L = PI * r * r;

    cout << "Luas lingkaran adalah: " << L << endl;

    return 0;
}
