#include <iostream>
#include <memory>

using namespace std;

int main() {
    int N, num = 0;
    cin >> N;
    unique_ptr<int[]> prime { new int[N] };
    for (int i = 0; i < N; i++) {
        cin >> prime[i];
        if (prime[i] == 1) continue;
        if (prime[i] == 2) {
            num++;
            continue;
        }
        for (int j = 2; j < prime[i]; j++) {
            if (prime[i] % j == 0) break;
            if (j == prime[i] - 1) num++;
        }
    }
    cout << num;
}