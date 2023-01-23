#include <iostream>
#include <algorithm>
#include <memory>

using namespace std;

int main() {
	int N;
	cin >> N;
	int* num = new int[N];
	// 보통 스마트 포인터를 자주 쓰는데, 스마트 포인터는 산술 연산을 사용할 수 없어서
	// sort() 함수를 사용하기에는 부적합하다고 판단했다.

	for (int i = 0; i < N; i++) cin >> num[i];
	// algorithm 헤더에 내장되어 있는 정렬 함수 sort()를 사용하였다.
	sort(num, num + N);
	for (int i = 0; i < N; i++) cout << num[i] << "\n";
	// endl을 사용할 때는 시간초과가 떴고 "\n"을 사용하면 시간초과가 뜨지 않는데,
	// endl이 매 실행마다 버퍼에 담긴 데이터를 비우는 flush를 수행하기 때문에
	// 실행 시간이 훨씬 길어지게 된다.

	delete[] num;
}