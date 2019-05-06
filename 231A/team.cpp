#include <iostream>

using std::endl;
using std::cout;
using std::cin;

int main() {

	unsigned short n, petya, vasya, tonya, count = 0;

	cin >> n;

	for (unsigned short i = 0; i < n; i++) {

		cin >> petya >> vasya >> tonya;

		if (petya + vasya + tonya >= 2) {
			count++;
		}

	}

	cout << count << endl;

	return 0;

}
