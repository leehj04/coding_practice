#include <iostream>

using namespace std;

int main() {
    string word;
    cin >> word;
    int alpb[26];
    fill_n(alpb, 26, -1);
    // int alpb[26] = { -1, };
    // 이렇게 하면 첫 원소만 -1로 초기화되고 그 뒤는 0으로 남아있다
    for (int i = 0; i < word.length(); i++) {
        if (alpb[word[i] - 97] == -1) {
            alpb[word[i] - 97] = i;
        }
    }
    for (int i = 0; i < 26; i++) {
        cout << alpb[i] << " ";
    }
}