#include <iostream>

using namespace std;

int main() {
    int min, max, prime = 0, sum = 0;
    cin >> min >> max;
    for (int i = min; i <= max; i++) {
        if (i == 1) continue;
        if (i == 2) {
            sum += 2;
            prime = 2;
            continue;
        }
        for (int j = 2; j < i; j++) {
            if (i % j == 0) break;
            if (j == i - 1) {
                sum += i;
                if (prime == 0) prime = i;
            }
        }
        
    }
    if (sum == 0) cout << -1;
    else cout << sum << "\n" << prime;
}