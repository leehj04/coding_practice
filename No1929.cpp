#include <iostream>

using namespace std;

int main() {
    int min, max;
    cin >> min >> max;

    /*
    for (int i = min; i <= max; i++) {
        if (i == 1) continue;
        if (i == 2 || i == 3) {
            cout << i << "\n";
            continue;
        }
        for (int j = 2; j < i / 2 + 1; j++) {
            // 풀다보니 생각이 나는 것 : 어차피 1/2 이상인 수로는 안나눠짐.
            // -> i/2 까지만 나눠봐도 괜찮다는 소리
            // 근데 3은 /2하면 1 이고 +1 해도 2라서 반복문이 안돌아서 예외로 뺐다.
            // 모든 수를 끝까지 다 나눠보는 것보단 반만 돌고 3을 예외로 빼는게 빠르지 않을까?
            if (i % j == 0) break;
            if (j == i / 2) cout << i << "\n";
        }
    }
    */ 
    // 시간 초과. 반복문을 무대뽀로 돌면 안되는 걸까?

}