#include <iostream>

using namespace std;

int main() {
    double x, y;
    // 1. float보다 double의 정밀도가 더 크다.
    cin >> x >> y;
    cout.precision(10);
    // 2. cout은 precision을 이용해 총 자릿수(소수점 위+아래 총합)를 조절한다.
    cout << x / y << endl;
}