#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int T, n, k;
	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> n;
		for (int j = n / 2; j >= 2; j--) {
			if (n - j == 1) continue;
			if (j == 2 || j == 3) {
				if (n - j == 2 || n - j == 3) {
					cout << j << " " << n - j << "\n";
					goto next;
				}
				for (k = 2; k <= sqrt(n - j); k++) {
					if ((n-j) % k == 0) goto retry;
					if (k == floor(sqrt(n-j))) {
						cout << j << " " << n - j << "\n";
						goto next;
					}
				}
			}
			for (k = 2; k <= sqrt(j); k++) {
				if (j % k == 0) break;
				if (k == floor(sqrt(j))) {
					for (k = 2; k <= sqrt(n - j); k++) {
						if ((n - j) % k == 0) goto retry;
						if (k == floor(sqrt(n - j))) {
							cout << j << " " << n - j << "\n";
							goto next;
						}
					}
				}
			}
		retry:;
		}
	next:;
	}
}