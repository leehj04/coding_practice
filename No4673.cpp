#include <iostream>

using namespace std;

void SelfNumber() {
    int check[10000] = { 0, };
    int num;
    for (int i = 1; i <= 10000; i++) {
        num = i + (i / 10000) + ((i / 1000) % 10) + ((i % 1000) / 100) + ((i % 100) / 10) + (i % 10);
        if (num <= 10000) {
            check[num - 1] = 1;
        }
    }
    for (int i = 0; i < 10000; i++) {
        if (check[i] == 0) cout << i + 1 << endl;
    }
}

int main() {
    SelfNumber();
}