#include <iostream>
#include <string>

using namespace std;

int main() {
    string sentence;
    // cin >> sentence;
    // cin 은 공백, 엔터 등을 기준으로 분리되기 때문에 공백이 문자열에 들어가지 않는다.
    getline(cin, sentence);
    int num = 1;
    int start = 0, end = 0;
    for (int i = 0; i < sentence.length(); i++) {
        if ((sentence[i] == ' ') && (start != end)) {
            num++;
            start = i + 1; 
        }
        end++;
    }
    // 단어의 처음과 끝을 기억해서 문장의 맨 앞이 공백이라 처음과 끝이 같으면 num 증가 X
    if (sentence[sentence.length() - 1] == ' ') num--;
    // 문장의 맨 끝이 공백이면 num 감소
    cout << num;
}