#include <iostream>

using namespace std;

int BlackFirst(char**);
int WhiteFirst(char**);

int main() {
	int N, M, num = 0, min = 64;
	cin >> N >> M;
	char** chess = (char**)malloc(sizeof(char*) * N);
	char** temp = (char**)malloc(sizeof(char*) * 8);

	
	for (int i = 0; i < N; i++) {
		chess[i] = (char*)malloc(sizeof(char) * M);
	}
	for (int i = 0; i < 8; i++) {
		temp[i] = (char*)malloc(sizeof(char) * 8);
	}
	
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> chess[i][j];
		}
	}

	for (int i = 0; i <= N - 8; i++) {
		for (int j = 0; j <= M - 8; j++) {
			for (int x = 0; x < 8; x++) {
				for (int y = 0; y < 8; y++) {
					temp[x][y] = chess[x + i][y + j];
				}
			}
			num = BlackFirst(temp) > WhiteFirst(temp) ? WhiteFirst(temp) : BlackFirst(temp);
			if (num < min) min = num;
		}
	}

	cout << min;

	for (int i = 0; i < N; i++) {
		free(chess[i]);
	}
	free(chess);
	for (int i = 0; i < 8; i++) {
		free(temp[i]);
	}
	free(temp);
}

int BlackFirst(char** chess) {
	int diff = 0;
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if (i % 2 == 0) {
				if (j % 2 == 0) {
					if (chess[i][j] != 'B') diff += 1;
				}
				else {
					if (chess[i][j] != 'W') diff += 1;
				}
			}
			else {
				if (j % 2 == 0) {
					if (chess[i][j] != 'W') diff += 1;
				}
				else {
					if (chess[i][j] != 'B') diff += 1;
				}
			}
		}
	}
	return diff;

}

int WhiteFirst(char** chess) {
	int diff = 0;
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if (i % 2 == 0) {
				if (j % 2 == 0) {
					if (chess[i][j] != 'W') diff += 1;
				}
				else {
					if (chess[i][j] != 'B') diff += 1;
				}
			}
			else {
				if (j % 2 == 0) {
					if (chess[i][j] != 'B') diff += 1;
				}
				else {
					if (chess[i][j] != 'W') diff += 1;
				}
			}
		}
	}
	return diff;
}