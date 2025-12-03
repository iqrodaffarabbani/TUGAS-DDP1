#include <iostream>
using namespace std;

// fungsi rekursif pangkat
int pangkat(int a, int b) {
    if (b == 0) {
        return 1;   // base case
    }
    return a * pangkat(a, b - 1); // recursive case
}

int main() {
    int a, b;
    cout << "Masukkan nilai a: ";
    cin >> a;
    cout << "Masukkan nilai b: ";
    cin >> b;

    cout << a << "^" << b << " = " << pangkat(a, b);

    return 0;
}

