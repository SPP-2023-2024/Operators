#include <iostream>
using namespace std;
 
int main()
{
	int x = 5, y = 5;

	cout << x << " " << y << std::endl;
	cout << ++x << " " << --y << std::endl;
	cout << x << " " << y << std::endl;
	cout << x++ << " " << y-- << std::endl;
	cout << x << " " << y << std::endl;
 
	return 0;
}