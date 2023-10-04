#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;

// Headers
string toString (double);
int toInt (string);
double toDouble (string);

int main() {
    double luas;
    double keliling;
    double panjang;
    double lebar;

	cout << "Hitung Luas dan Keliling Persegi Panjang" << endl;
    cout << "Masukkan Nilai Panjang :  ";
    cin >> panjang;
    cout << "Masukkan Nilai Lebar :  ";
    cin >> lebar;
    luas = panjang * lebar;
    keliling = 2 * (panjang + lebar);
    cout << "Hasil Luas :  ";
    cout << luas << endl;
    cout << "Hasil Keliling :  " ;
    cout << keliling << endl;
    return 0;
}

// The following implements type conversion functions.
string toString (double value) { //int also
    stringstream temp;
    temp << value;
    return temp.str();
}

int toInt (string text) {
    return atoi(text.c_str());
}

double toDouble (string text) {
    return atof(text.c_str());
}
