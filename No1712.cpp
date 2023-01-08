#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    // long long num = 1;
    // 이렇게 작성하면 답은 나오는데 시간 제한에 걸린다.
    // 왤까?
    
    /*
    long long num = 1LL;
    if (b > c) {
        num = -1;
        cout << num;
        return 0;
    }
    while (true) {
        if (num * c > a + num * b) {
            break;
        }
        else {
            num++;
        }
    }
    cout << num;
    */

    // https://www.acmicpc.net/board/view/81777 의 답변을 참고하였다.
    // '반복문에 너무 의존하지 않는 법'
    // 반복문에서 돌아가는 식을 탐구하고, 반복하지 않고 답을 찾는 것이 베스트.
    // 현재 num * c > a + num * b 을 만족하는 num을 찾는 과정
    // num > a/(c-b)
    // num은 자연수이므로 int(a/(c-b))+1 이라는 것을 도출
    // 와우. 놀랍다

    if (b >= c) {
        cout << -1;
    }
    else {
        cout << int(a / (c - b)) + 1;
    }
}