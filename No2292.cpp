#include <iostream>

using namespace std;

int main() {
    // 거리가 n인 방 중 가장 숫자가 큰 방 An = A(n-1) + 6*(n-1)
    // A1 = 1+6*0, A2 = 1+6*1, A3 = 1+6*2, ...
    // 거리가 n인 방의 개수 = 6(n-1)
    // 거리가 n인 방 중 가장 숫자가 작은 방 = An - {6(n-1)-1}
    // 즉, 거리가 n인 방의 범위 = 8+3*n*(n-3) ~ 1+3*n*(n-1)

    int num, room = 1;
    cin >> num;
    if (num == 1) {
        cout << 1;
        return 0;
    }
    while (true) {
        if ((num >= 8 + 3 * room * (room - 3)) && (num <= 1 + 3 * room * (room - 1))) {
            cout << room;
            break;
        }
        else {
            room++;
        }
    }
}