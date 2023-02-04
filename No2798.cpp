#include <iostream>
#include <memory>

using namespace std;

int main() {
    int num, sum, result = 0;
    cin >> num >> sum;
    unique_ptr<int[]> card = make_unique<int[]>(num);
    for (int i = 0; i < num; i++) {
        cin >> card[i];
    }
    for (int x = 0; x < num; x++) {
        for (int y = x + 1; y < num; y++) {
            for (int z = y + 1; z < num; z++) {
                if ((card[x] + card[y] + card[z] <= sum) && (sum - result > sum - (card[x] + card[y] + card[z]))) {
                    result = card[x] + card[y] + card[z];
                }
            }
        }
    }

    cout << result;
}