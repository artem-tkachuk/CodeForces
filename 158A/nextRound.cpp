#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main() {

	unsigned short n, k, num, count = 0;

	cin >> n >> k;

	while ((count < k) && (cin >> num) && (num)) {
		count++;
	}

	if (count == k) {	//the loop did not break before reaching k
		unsigned short a = num;	//a[k] - score of k-th participant
		while ((count < n) && (cin >> num) && (num == a)) {
			count++;
		}
	}

	cout << count << endl;

	return 0;

}
