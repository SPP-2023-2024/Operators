#include <iostream>
using namespace std;

int main() {
    int quotient, remainder;
    int dividend = 56; 
    int divisor = 6; 

    quotient = dividend / divisor;
    remainder = dividend % divisor;

    cout << "Частка: " << quotient << endl;
    cout << "Остача: " << remainder << endl;

    return 0;
}