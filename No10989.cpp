#include <iostream>
#include <memory>

using namespace std;

int main() {
	/*
	* ** 문제 설명에 기재된 카운팅 정렬(계수 정렬)이란?
	* 
	* 배열의 인덱스와 값을 이용해 배열에 존재하는 수의 개수를 세어 정렬을 수행한다.
	* O(n + k)의 복잡도. k : 정렬을 수행할 배열의 가장 큰 값.
	* k가 상수 취급되어 생략되지 않고 수행 시간에 영향을 미친다.
	* 
	* 배열의 최대값이 작을 때 효과적이고, 크면 클수록 메모리를 비효율적으로 쓴다.
	* 정렬하고자 하는 배열에 음수가 있으면 사용할 수 없다.
	*/

	/*
	int N, num;
	cin >> N;
	int counting[10001] = { 0, };

	for (int i = 0; i < N; i++) {
		cin >> num;
		counting[num]++;
	}
	for (int i = 1; i <= 10000; i++) {
		if (counting[i] == 0) continue;
		else {
			for (int j = 0; j < counting[i]; j++)
				cout << i << "\n";
		}
	}
	*/
	// 시간 초과

	/*
	int N, max = 0;
	cin >> N;
	unique_ptr<int[]> num{ new int[N] };
	unique_ptr<int[]> result{ new int[N] };

	for (int i = 0; i < N; i++) {
		cin >> num[i];
		if (num[i] > max) max = num[i];
	}

	unique_ptr<int[]> counting{ new int[max + 1] };

	for (int i = 0; i < N; i++) {
		counting[i] = 0;
	}

	for (int i = 0; i < N; i++) {
		counting[num[i]]++;
	}

	for (int i = 1; i < max; i++) {
		counting[i] += counting[i - 1];
	}

	for (int i = N - 1; i >= 0; i--) {
		result[counting[num[i]] - 1] = num[i];
		counting[num[i]]--;
	}

	for (int i = 0; i < N; i++) {
		cout << result[i] << "\n";
	}
	*/
	// 메모리 초과
}