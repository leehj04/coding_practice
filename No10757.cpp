#include <iostream>
#include <string>
#include <memory>

using namespace std;

int main() {
    string A, B;
    cin >> A >> B;
    // 길이제한을 최소화하기 위해 string으로 받는다. string은 메모리가 허락하는 한 실질적 무한 길이라고 한다.
    int max = A.length() > B.length() ? A.length() : B.length();
    unique_ptr<int[]> Aint{ new int[max] };
    unique_ptr<int[]> Bint{ new int[max] };
    unique_ptr<int[]> result{ new int[max + 1] };
    // 덧셈으로 자릿수가 한자리 늘어나는 것을 대비해 A,B 중 긴 길이 + 1을 결과 배열 크기로 생성

    for (int i = 0; i < max; i++) {
        Aint[i] = 0;
        Bint[i] = 0;
        result[i] = 0;
    }
    // 초기화

    for (int i = 0; i < A.length(); i++) Aint[i] = A[A.length() - i - 1] - 48;
    for (int i = 0; i < B.length(); i++) Bint[i] = B[B.length() - i - 1] - 48;
    // 자릿수가 늘어나는 상황을 대비해 일의 자리부터 배열의 앞(0번 자리)에 넣음

    for (int i = 0; i < max; i++) {
        if (Aint[i] + Bint[i] + result[i] > 9) {
            result[i] = (Aint[i] + Bint[i] + result[i]) % 10;
            result[i + 1] = 1;
        }
        // 받아올림하는 경우
        else {
            result[i] = Aint[i] + Bint[i] + result[i];
        }
        // 받아올림하지 않는 경우
    }

    if (result[max] == 0) {
        max--;
    }
    // 자릿수가 추가되지 않았으면 맨 앞자리가 0인 상태임으로 그것은 출력할 필요가 없다.

    for (int i = max; i >= 0; i--) {
        cout << result[i];
    }
    // 일의 자리가 배열의 가장 앞에 있기 때문에 거꾸로 출력해줘야 함
}