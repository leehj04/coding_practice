#include <iostream>

using namespace std;

void FindMax(int*, int*, int*, int);

int main() {
	int N, max = 0, maxIndex, initial, x = 1;
	cin >> N;
	// unique_ptr<int[]> mind = make_unique<int[]>(N);
	int* mind = new int[N];

	for (int i = 0; i < N; i++) {
		cin >> mind[i];
	}

	initial = mind[0];
	FindMax(mind, &max, &maxIndex, N);

	if (N == 1) {
		cout << 0;
		return 0;
	}
	if (maxIndex == 0) {
		cout << 0;
		return 0;
	}
	else {
		while (true) {
			if (mind[x] == max) {
				mind[x] -= 1;
				mind[0] += 1;
				FindMax(mind, &max, &maxIndex, N);
				if (maxIndex == 0) break;
				else x = 1;
			}
			else x += 1;
		}
	}

	cout << mind[0] - initial;
	
	delete[] mind;

	/*
	* malloc 짝궁 - free
	* : 초기값 할당 불가, 생성자 호출 안함, 크기 변경 가능
	* new 짝궁 - delete
	* : 초기화 가능, 생성자 자동 호출, 재할당 불가
	*/

}

void FindMax(int* mind, int* max, int* maxIndex, int N) {
	*max = 0;
	for (int i = 0; i < N; i++) {
		if (*max <= mind[i]) {
			*max = mind[i];
			*maxIndex = i;
		}
	}
}