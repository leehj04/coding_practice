#include <iostream>
#include <string>

using namespace std;

int DigitSum(string);

int main() {
    int N, ctor = 0;
    cin >> N;
    for (int i = 0; i < N; i++) {
        if (i + DigitSum(to_string(i)) == N) {
            ctor = i;
            break;
        }
    }
    cout << ctor;

}

int DigitSum(string str) {
    int sum = 0;
    for (int i = 0; i < str.length(); i++) {
        sum += str[i] - 48;
    }
    return sum;
}