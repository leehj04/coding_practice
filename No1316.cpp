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
        // 길이가 1이면 무조건 그룹단어이므로 넘어감
        alpb[word[0] - 97]++;
        for (int j = 1; j < word.length(); j++) {
            if (word[j] != word[j - 1]) {
                if (alpb[word[j] - 97] != 0) {
                    break;
                }
                // 앞 자리와 다른 알파벳이 나왔을 때 이미 언급된 알파벳이면
                // 그룹단어가 아니므로 끝냄
                else {
                    alpb[word[j] - 97]++;
                }
                // 처음 언급된 알파벳이면 표시
            }
            // 앞 자리와 같은 알파벳이면 괜찮음. 그냥 넘어감
            if (j == word.length() - 1) {
                group++;
            }
            // 끝내지지 않고 끝까지 도달해야만 그룹단어
        }
        for (int k = 0; k < 26; k++) alpb[k] = 0;
        // 알파벳 언급을 표시한 배열을 초기화
    }
    cout << group;
}