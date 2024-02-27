#include <iostream>
using namespace std;

int main() {
    int x = 5;
    int y = 10;

    // Рівність
    if (x == y) {
        cout << "x рівне y" << endl;
    } else {
        cout << "x не рівне y" << endl;
    }

    // Нерівність
    if (x != y) {
        cout << "x не рівне y" << endl;
    } else {
        cout << "x рівне y" << endl;
    }

    // Менше
    if (x < y) {
        cout << "x менше y" << endl;
    } else {
        cout << "x не менше y" << endl;
    }

    // Більше
    if (x > y) {
        cout << "x більше y" << endl;
    } else {
        cout << "x не більше y" << endl;
    }

    // Менше або рівне
    if (x <= y) {
        cout << "x менше або рівне y" << endl;
    } else {
        cout << "x не менше або рівне y" << endl;
    }

    // Більше або рівне
    if (x >= y) {
        cout << "x більше або рівне y" << endl;
    } else {
        cout << "x не більше або рівне y" << endl;
    }

    return 0;
}
