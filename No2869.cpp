#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double A, B, V;
    cin >> A >> B >> V;
    /*
    int x = 1;
    while (true) {
        if ((A - B) * (x - 1) + A >= V) {
            break;
        }
        else {
            x++;
        }
    }
    cout << x;
    * 시간 초과
    * 반복문을 돌리지 않고 답을 찾아야 한다는 뜻
    */
    printf("%0.lf", 1 + ceil((V - A) / (A - B)));
    // cout << 1 + ceil((V - A) / (A - B)) << endl;
    // e 표현으로 출력되어서 cout 대신 printf를 이용했음
}