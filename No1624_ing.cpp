#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;

int main() {
	int N, dq = 1, num, k, min, minIndex, x, same, before = -1, itv;
	cin >> N;
	min = N;
	itv = N;
	int* sorted = new int[N];
	int* original = new int[N];
	vector<int> index;

	for (int i = 0; i < N; i++) {
		cin >> original[i];
		sorted[i] = original[i];
	}
	sort(sorted, sorted + N);

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (original[i] == sorted[j]) {
				num = j;
				break;
			}
		}
		index.push_back(num);

		if (i == 0) {
			continue;
		}
		else {
			for (k = 0; k < index.size() - 1; k++) {
				if (abs(num - index[k]) < min) {
					minIndex = index[k];
					min = abs(num - index[k]);
				}
				if (min <= 1) {
					break;
				}
			}

			if (k == index.size() - 1) {
				if (minIndex > num) {
					for (x = num + 1; x < minIndex; x++) {
						for (int q = i + 1; q < N; q++) {
							if (original[q] == sorted[x]) {
								same = q;
								break;
							}
						}
						if (sorted[x] != sorted[num] && sorted[x] != sorted[minIndex]) {
							break;
						}
						else if ((x + 1 < minIndex) && (sorted[x] != sorted[x + 1])) {
							break;
						}

						else if (sorted[x] == sorted[num]) {
							for (int y = i + 1; y < same; y++) {
								if (original[y] < sorted[x]) {
									for (int w = 0; w < x; w++) {
										if (original[y] == sorted[w]) {
											if (abs(w - minIndex) > 1) goto next1;
										}
									}
									for (int m = 0; m < index.size() - 1; m++) {
										if ((index[m] < minIndex) && (minIndex - index[m] < itv)) {
											itv = minIndex - index[m];
											before = m;
										}
									}
									if ((before != -1) && (sorted[x] <= sorted[index[before]])) {
										goto end1;
									}
									else if (before == -1) {
										goto end1;
									}
								}
							next1:;
							}
						}
					}
				end1: itv = N; before = -1;

					if (x == minIndex) {
						dq -= 1;
					}
				}
				else {
					for (x = minIndex + 1; x < num; x++) {
						if (sorted[x] != sorted[num] && (sorted[x] != sorted[minIndex])) {
							break;
						}
						else if ((x + 1 < num) && (sorted[x] != sorted[x + 1])) {
							break;
						}
						else if (sorted[x] == sorted[minIndex]) {
							for (int q = i + 1; q < N; q++) {
								if (original[q] == sorted[x]) {
									same = q;
									break;
								}
							}
							for (int y = i + 1; y < same; y++) {
								if (original[y] < sorted[x]) {
									for (int w = 0; w < x; w++) {
										if (original[y] == sorted[w]) {
											if (abs(w - minIndex) > 1) goto next2;
										}
									}
									for (int m = 0; m < index.size() - 1; m++) {
										if ((index[m] < minIndex) && (minIndex - index[m] < itv)) {
											itv = minIndex - index[m];
											before = m;
										}
									}
									if ((before != -1) && (sorted[x] <= sorted[index[before]])) {
										goto end2;
									}
									else if (before == -1) {
										goto end2;
									}
								}
							next2:;
							}
						}
					}
				end2: itv = N; before = -1;

					if (x == num) {
						dq -= 1;
					}
				}
				dq += 1;
			}
		}
		min = N;
	}

	cout << dq;

	delete[] sorted;
	delete[] original;
}