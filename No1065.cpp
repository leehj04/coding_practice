#include <iostream>

using namespace std;

void AP(int range) {
    int num1, num2, num3, num4;
    int count = 0;
    for (int i = 1; i <= range; i++) {
        num4 = i / 1000;
        num3 = (i % 1000) / 100;
        num2 = (i % 100) / 10;
        num1 = i % 10;
        if (num2 == 0 && num3 == 0 && num4 == 0) {
            count++;
        }
        else if (num3 == 0 && num4 == 0) {
            count++;
        }
        else if (num4 == 0) {
            if ((num3 - num2) == (num2 - num1)) count++;
        }
        else {
            if (((num4 - num3) == (num3 - num2)) && ((num3 - num2) == (num2 - num1))) count++;
        }
    }
    cout << count;
}

int main() {
    int x;
    cin >> x;
    AP(x);
}