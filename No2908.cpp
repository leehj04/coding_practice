#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
    string num1, num2;
    cin >> num1 >> num2;
    int cal1 = 0, cal2 = 0;
    for (int i = 0; i < 3; i++) {
        cal1 += (num1[i] - 48) * pow(10, i);
        cal2 += (num2[i] - 48) * pow(10, i);
    }
    cal1 > cal2 ? cout << cal1 : cout << cal2;
}