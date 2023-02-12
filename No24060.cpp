#include <iostream>

int N, K, cnt = 0;

using namespace std;

void merge_sort(int*, int, int);
void merge(int*, int, int, int);

int main() {
	cin >> N >> K;
	int* number = new int[N];
	for (int i = 0; i < N; i++) {
		cin >> number[i];
	}

	merge_sort(number, 0, N - 1);
	if (cnt < K) cout << -1;

	delete[] number;
}

void merge_sort(int* A, int p, int r) {
	int q;
	if (p < r) {
		q = (p + r) / 2;
		merge_sort(A, p, q);
		merge_sort(A, q + 1, r);
		merge(A, p, q, r);
	}
}

void merge(int* A, int p, int q, int r) {
	int* tmp = new int[N + 1];
	int i = p, j = q + 1, t = 1;
	while (i <= q && j <= r) {
		if (A[i] <= A[j]) {
			tmp[t++] = A[i++];
		}
		else {
			tmp[t++] = A[j++];
		}
	}
	while (i <= q) {
		tmp[t++] = A[i++];
	}
	while (j <= r) {
		tmp[t++] = A[j++];
	}
	i = p; t = 1;
	while (i <= r) {
		A[i++] = tmp[t++];
		cnt += 1;
		if (cnt == K) cout << A[i - 1];
	}

	delete[] tmp;

}