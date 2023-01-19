#include <iostream>

using namespace std;

int main() {
    int matrix[9][9];
    int max = 0, max_row = 1, max_col = 1;
    // 모든 숫자가 0일 때를 대비해서 max_row와 max_col을 1로 초기화해놓는다.
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            cin >> matrix[i][j];
            if (matrix[i][j] > max) {
                max = matrix[i][j];
                max_row = i + 1;
                max_col = j + 1;
            }
        }
    }
    cout << max << "\n" << max_row << " " << max_col;
}