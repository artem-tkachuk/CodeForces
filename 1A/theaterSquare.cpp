#include <iostream>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;

int main() {

	double n, m, a;
	unsigned long long q;

	cin >> n >> m >> a;

	n = ceil(n / a);
	m = ceil(m / a);

	q = n * m;

	cout << q << endl;

	return 0;
}
