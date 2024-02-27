#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int y = 5;

    x = y;
    cout << "x = " << x << endl;

    x += 3;
    cout << "x = " << x << endl; 

    y -= 2;
    cout << "y = " << y << endl;

    x *= 2;
    cout << "x = " << x << endl;

    y /= 2;
    cout << "y = " << y << endl; 

    x %= 3;
    cout << "x = " << x << endl; 

    return 0;
}
