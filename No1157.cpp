#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

int main() {
    string word;
    cin >> word;
    int count[26] = { 0, };
    // 알파벳 별 개수를 센다
    int max = 0, maxPos;
    int maxCount = 0;
    for (int i = 0; i < word.length(); i++) {
        if (word[i] >= 97) {
            count[word[i] - 97]++;
        }
        else {
            count[word[i] - 65]++;
        }
    }
    for (int i = 0; i < 26; i++) {
        if (count[i] >= max) {
            if (count[i] > max) maxCount = 1;
            else if (count[i] == max) maxCount++;;
            max = count[i];
            maxPos = i;
        }
    }
    if (maxCount == 1) {
        printf("%c", maxPos + 65);
    }
    else {
        cout << "?";
    }
}