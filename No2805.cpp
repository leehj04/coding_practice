#include <iostream>
#include <algorithm>

using namespace std;

int N, M;
bool CheckCut(int*, int);

int main() {
	
	int std = 0, sum = 0;
	cin >> N >> M;
	int* tree = (int*)malloc(sizeof(int) * N);
	for (int i = 0; i < N; i++) {
		cin >> tree[i];
		if (tree[i] > std) std = tree[i];
	}

	if (N == 1) {
		cout << tree[0] - M;
		return 0;
	}

	std /= 2;
	if (std != 1) sum = std / 2;
	else sum = 1;
	
	/*
	std -= 1;
	// std = *max_element(tree, tree + N) - 1;
	// 배열명에 정수를 더하면 가리키는 자료형의 크기를 곱해서 더한다.
	// 여기서 N * sizeof(int)를 해줄 필요가 없다.

	
	do{
		for (int i = 0; i < N; i++) {
			if (tree[i] > std) {
				cut += tree[i] - std;
			}
		}
		if (cut >= M) {
			cout << s td;
			break;
		}
		else {
			std -= 1;
			cut = 0;
		}
	} while (std >= 0);
	
	* 시간초과
	*/

	while (true) {
		if (CheckCut(tree, std)) {
			if (!CheckCut(tree, std + 1)) {
				cout << std;
				break;
			}
			else {
				std += sum;
				if (sum != 1) sum /= 2;
			}
		}
		else {
			std -= sum;
			if (sum != 1) sum /= 2;
		}
	}

	free(tree);

}


bool CheckCut(int* tree, int std) {
	long long cnt = 0;
	for (int i = 0; i < N; i++) {
		if (tree[i] > std) cnt += tree[i] - std;
	}
	
	return cnt >= M;
}