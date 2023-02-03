#include <iostream>
#include <string>

using namespace std;

int main() {
    string N;
    char temp;
    cin >> N;
    for (int i = 0; i < N.length(); i++) {
        for (int j = 0; j < N.length() - i - 1; j++) {
            if (N[j] - 48 < N[j + 1] - 48) {
                temp = N[j];
                N[j] = N[j + 1];
                N[j + 1] = temp;
            }
        }
    }
    cout << N;
}