#include <iostream>

using namespace std;

int main() {
    int paper[100][100] = { 0, };
    int num = 0;

    int n, x, y;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x >> y;
        for (int j = 0; j < 10; j++) {
            for (int k = 0; k < 10; k++) {
                paper[x + j - 1][y + k - 1] = 1;
                paper[x + k - 1][y + j - 1] = 1;
            }
        }
    }
    for (int i = 0; i < 100; i++) {
        for (int j = 0; j < 100; j++) {
            if (paper[i][j] != 0) num++;
        }
    }

    cout << num;

}