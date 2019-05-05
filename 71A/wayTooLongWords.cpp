#include <iostream>
#include <cstring>

using namespace std;

int main() {

	unsigned short n, len;	//1 <= n <= 100, 1 <= len <= 100
	string word;		

	cin >> n;

	for (int i = 0; i < n; i++) {

		cin >> word;
		len = word.length();

		if (len > 10) {
			cout << word[0] << len - 2 << word[len - 1] << endl;
		} else {
			cout << word << endl;
		}

	}

	return 0;
}
