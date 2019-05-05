#include <iostream>
using namespace std;

int main() {

	unsigned short w;

	cin >> w;

	cout << (!(w % 2) && (w != 2) ? "YES" : "NO");

    return 0;
}
