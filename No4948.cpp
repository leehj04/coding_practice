#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n, num = 0, i, j, k;
    while (true) {
        cin >> n;
        if (n == 0) break;
        for (i = n + 1; i <= 2 * n; i++) {
            if (i == 1) continue;
            if (i == 2 || i == 3) {
                num = 1;
                continue;
            }
            k = sqrt(i);
            for (j = 2; j <= k; j++) {
                if (i % j == 0) break;
                if (j == floor(k)) num++;
            }
        }
        cout << num << "\n";
        num = 0;
    }
}