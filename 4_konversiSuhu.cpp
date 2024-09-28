#include <iostream>
#include <fstream>
#include <iomanip> // Untuk std::setw
using namespace std;

int main() {
    // Membuka file untuk menyimpan hasil konversi
    ofstream outFile("suhu.dat");
    
    if (!outFile) {
        cerr << "Error membuka file!" << endl;
        return 1;
    }

    // Menyimpan header ke dalam file
    outFile << setw(10) << "C" << setw(10) << "F" << setw(10) << "R" << endl;

    // Mengonversi suhu dari 0 hingga 100 derajat Celsius
    for (int C = 0; C <= 100; C++) {
        // Menghitung Fahrenheit dan Reamur
        float F = (9.0 / 5.0) * C + 32;
        float R = (4.0 / 9.0) * C;

        // Menyimpan hasil ke dalam file
        outFile << setw(10) << C << setw(10) << F << setw(10) << R << endl;
    }

    // Menutup file
    outFile.close();
    
    cout << "Konversi suhu berhasil disimpan dalam suhu.dat" << endl;

    return 0;
}
