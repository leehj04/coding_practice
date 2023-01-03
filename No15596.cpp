#include <iostream>
#include <vector>

using namespace std;

long long sum(vector<int> &a) {
    long long ans = 0;
    for (vector<int>::iterator iter = a.begin(); iter != a.end(); iter++) {
        // iterator : 반복자. 컨테이너 원소에 접근할 수 있는 (포인터와 유사한) 역할
        // +) 컨테이너란? 다른 객체들을 보관하는 공간. ex) vector, queue, stack, list, set, map 등
        // * 연산자를 이용해 내부의 원소를 접근할 수 있음
        ans += *iter;
    }
    return ans;
}