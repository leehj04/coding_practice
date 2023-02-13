#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int N, M, B, block = 0, max = -1, record = 0, ansHeight = 0, ansTime;
	cin >> N >> M >> B;
	int* land = (int*)malloc(sizeof(int) * (N * M));

	for (int i = 0; i < N * M; i++) {
		cin >> land[i];
		if (land[i] > max) max = land[i];
	}

	int* time = new int[max + 1];
	for (int i = 0; i <= max; i++) {
		time[i] = -1;
	}

	// int ground = *max_element(begin(height), end(height));
	// max_element는 최대값에 해당하는 객체의 주소를 return해서 *을 붙여줘야 함
	
	for (int x = 0; x <= max; x++) {
		for (int i = 0; i < N * M; i++) {
			if (land[i] < x) {
				block += (x - land[i]);
				record += (x - land[i]);
			}
			else if (land[i] > x) {
				record += 2 * (land[i] - x);
				block -= (land[i] - x);
			}
		}
		if (block <= B) {
			time[x] = record;
		}
		record = 0;
		block = 0;
	}

	ansTime = *max_element(time, time + ((max + 1) * sizeof(int)));

	for (int i = 0; i <= max; i++) {
		if ((time[i] != -1) && (time[i] <= ansTime)) {
			ansHeight = i;
			ansTime = time[i];
		}
	}

	cout << ansTime << " " << ansHeight;
	
	
	delete[] time;
	free(land);
}