#include <iostream>

using namespace std;

int main() {
	int x;
	cin >> x;
	int n = 0;
	while (true) {
		if ((x >= 1 + (n * (n + 1)) / 2) && x <= ((n + 1) * (n + 2) / 2)) break;
		else n++;
	}
	if (n % 2 == 1) {
		cout << (x - (n * (n + 1)) / 2) << "\/" << ((0.5 * n * (n + 3)) + 2 - x) << endl;
	}
	else {
		cout << ((0.5 * n * (n + 3)) + 2 - x) << "\/" << (x - (n * (n + 1)) / 2) << endl;
	}
}