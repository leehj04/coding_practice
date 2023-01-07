#include <iostream>
#include <string>

using namespace std;

int main() {
    int num;
    cin >> num;
    int alpb[26] = { 0, };
    string word;
    int group = 0;
    for (int i = 0; i < num; i++) {
        cin >> word;
        if (word.length() == 1) {
            group++;
            continue;
        }
        alpb[word[0] - 97]++;
        for (int j = 1; j < word.length(); j++) {
            if (word[j] != word[j - 1]) {
                if (alpb[word[j] - 97] != 0) {
                    break;
                }
                else {
                    alpb[word[j] - 97]++;
                }
            }
            if (j == word.length() - 1) {
                group++;
            }
        }
        for (int k = 0; k < 26; k++) alpb[k] = 0;
    }
    cout << group;
}