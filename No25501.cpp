#include <iostream>
#include <string>

using namespace std;

void recursion(string str, int l, int r, int num) {
    if (l >= r) cout << 1 << " " << num+1 << "\n";
    else if (str[l] != str[r]) cout << 0 << " " << num+1 << "\n";
    else return recursion(str, l + 1, r - 1, num+1);
}

void isPalindrome(string str) {
    return recursion(str, 0, str.length() - 1, 0);
}

int main() {
    int T;
    cin >> T;
    string test;
    for (int i = 0; i < T; i++) {
        cin >> test;
        isPalindrome(test);
    }
}