#include <iostream>
using namespace std;

int main() {
    unsigned int x = 5; // 0000 0101
    unsigned int y = 10; // 0000 1010

    // Побітове І (AND)
    unsigned int result_and = x & y; // 0000 0000
    cout << "x & y = " << result_and << endl;

    // Побітове АБО (OR)
    unsigned int result_or = x | y; // 0000 1111
    cout << "x | y = " << result_or << endl;

    // Побітове виключне АБО (XOR)
    unsigned int result_xor = x ^ y; // 0000 1111
    cout << "x ^ y = " << result_xor << endl;

    // Побітовий зсув вліво (<<)
    unsigned int result_left_shift = x << 1; // 0000 1010
    cout << "x << 1 = " << result_left_shift << endl;

    // Побітовий зсув вправо (>>)
    unsigned int result_right_shift = y >> 1; // 0000 0101
    cout << "y >> 1 = " << result_right_shift << endl;

    // Побітове НЕ (~)
    unsigned int result_not_x = ~x; // 1111 1010
    cout << "~x = " << result_not_x << endl;

    return 0;
}
