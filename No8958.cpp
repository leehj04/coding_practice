#include <iostream>
#include <string>

using namespace std;

int main() {
    int test_num, save = 0, score = 0;
    string test;
    cin >> test_num;
    for (int i = 0; i < test_num; i++) {
        cin >> test;
        for (int j = 0; j < 80; j++) {
            if (test[j] == 'O') {
                save++;
                score += save;
            }
            else if (test[j] == 'X') {
                save = 0;
            }
            else {
                break;
            }
        }
        cout << score << endl;
        score = 0; save = 0;
    }

}