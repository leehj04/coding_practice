#include <iostream>
#include <memory>

using namespace std;

int main() {
    int N, temp;
    cin >> N;
    unique_ptr<int[]> num = make_unique<int[]>(N);

    for (int i = 0; i < N; i++) {
        cin >> num[i];
    }

    // 버블정렬
    for (int x = 0; x < N - 1; x++) {
        for (int i = 0; i < N - x - 1; i++) {
            if (num[i] > num[i + 1]) {
                temp = num[i];
                num[i] = num[i + 1];
                num[i + 1] = temp;
            }
        }
    }

    for (int i = 0; i < N; i++) cout << num[i] << endl;

    // 삽입정렬
    int key;
    for (int i = 1; i < N; i++) {
        key = num[i];
        for (int j = i - 1; j >= 0; j--) {
            if (num[j] > key) {
                num[j + 1] = num[j];
                num[j] = key;
            }
            else {
                num[j + 1] = key;
                break;
            }
        }
    }

    for (int i = 0; i < N; i++) cout << num[i] << endl;

}