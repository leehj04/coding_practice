#include <iostream>
#include <memory>

using namespace std;

int main() {
	int N, swap = 0, temp;
	cin >> N;
	unique_ptr<int[]> bubble = make_unique<int[]>(N);
	for (int i = 0; i < N; i++) {
		cin >> bubble[i];
	}

	/*
	for (int i = 0; i < N - 1; i++) {
		for (int j = 0; j < N - i - 1; j++) {
			if (bubble[j] > bubble[j + 1]) {
				temp = bubble[j];
				bubble[j] = bubble[j + 1];
				bubble[j + 1] = temp;
				swap += 1;
			}
		}
	}
	* 진짜 다 돌려보고 다 세는 방법
	* >> 당연히 시간 초과
	*/


	cout << swap;
}