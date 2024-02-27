#include <iostream>
using namespace std;

int main() {
    int x = 5;
    int y = 10;

    // Логічне І (&&)
    if (x > 0 && y < 15) {
        cout << "x більше 0 І y менше 15" << endl;
    } else {
        cout << "Одна з умов не виконана" << endl;
    }

    // Логічне АБО (||)
    if (x == 5 || y == 5) {
        cout << "x рівне 5 АБО y рівне 5" << endl;
    } else {
        cout << "Жодна з умов не виконана" << endl;
    }

    // Логічне НЕ (!)
    if (!(x == y)) {
        cout << "x не рівне y" << endl;
    } else {
        cout << "x рівне y" << endl;
    }

    return 0;
}
