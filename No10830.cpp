#include <iostream>
#include <algorithm>
#include <bitset>
#include <cmath>

int ChangeBinary(long long);
/*
 int N;
 using namespace std;


 void Square(int**, int**, int**);

 int main(){
	int B;
	cin >> N >> B;
	int** origin_matrix = (int**)malloc(sizeof(int*) * N);
	for(int i=0; i<N; i++){
		origin_matrix[i] = (int*)malloc(sizeof(int) * N);
	}

	int** calculate_matrix = (int**)malloc(sizeof(int*) * N);
	for(int i=0; i<N; i++){
		calculate_matrix[i] = (int*)malloc(sizeof(int*) * N);
	}

	int** answer = (int**)calloc(N, sizeof(int*));
	for(int i=0; i<N; i++){
		answer[i] = (int*)calloc(N, sizeof(int));
	}

	for(int i=0; i<N; i++){
		for(int j=0; j<N; j++){
			cin >> origin_matrix[i][j];
			calculate_matrix[i][j] = origin_matrix[i][j];
		}
	}

	for(int i=1; i<B; i++){
		Square(answer, calculate_matrix, origin_matrix);
		if(i != B-1){
			for(int i=0; i<N; i++){
				for(int j=0; j<N; j++){
					answer[i][j] = 0;
				}
			}
		}
		// copy(&answer[0][0], &answer[0][0] + (N * N), &matrix[0][0]);
	}

	for(int i=0; i<N; i++){
		for(int j=0; j<N; j++){
			cout << answer[i][j] << " ";
		}
		cout << "\n";
	}


	for(int i=0; i<N; i++){
		free(origin_matrix[i]);
	}
	free(origin_matrix);

	for(int i=0; i<N; i++){
		free(calculate_matrix[i]);
	}
	free(calculate_matrix);

	for(int i=0; i<N; i++){
		free(answer[i]);
	}	
	free(answer);
}

 void Square(int** answer, int** calculate_matrix, int** origin_matrix){

	 for(int i=0; i<N; i++){
		for(int j=0; j<N; j++){
			for(int k=0; k<N; k++){
				answer[i][j] = ((answer[i][j] % 1000) + ((((calculate_matrix[i][k] % 1000) * (origin_matrix[k][j] % 1000)) % 1000) % 1000)) % 1000;
			}
		}
	 }

	 for(int i=0; i<N; i++){
		for(int j=0; j<N; j++){
			calculate_matrix[i][j] = answer[i][j];
		}
	 }


 }

 * 정말 n번 제곱하는 단순 구현
 * B가 너무 크기 때문에 시간 초과로 다른 방법을 찾아야 함
 */

 /*
 * A^4 = A^2 x A^2
 * 그렇다는 것은...
 * 예를 들어 15는 이진수로 1111이니까
 * A^8 x A^4 x A^2 x A^1
 *
 * 
 * 1. B보다 작으면서 가장 가까운 2의 제곱수를 찾는다.
 * ㄴ 2진수로 바꿔서 가장 앞에 있는 1을 보면 됨
 * 
 * --------------------------------------------------------
 * 검색을 통해 힌트를 얻었다
 * 바로 "분할"해서 계산하는 것
 * B가 홀수 => B/2 ^ B/2 ^ 1
 * B가 짝수 => B/2 ^ B/2
 */

using namespace std;

int main() {
	int N, sq = -1;
	double mod;
	long long B;
	cin >> N >> B;

	int** origin_matrix = (int**)malloc(sizeof(int*) * N);
	for (int i = 0; i < N; i++) {
		origin_matrix[i] = (int*)malloc(sizeof(int) * N);
	}

	int** calculate_matrix = (int**)calloc(N, sizeof(int*));
	for (int i = 0; i < N; i++) {
		calculate_matrix[i] = (int*)calloc(N, sizeof(int*));
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> origin_matrix[i][j];
		}
	}

	string square;
	while (B != 0) {
		square += (B % 2 == 0 ? "0" : "1");
		B /= 2;
		sq += 1;
	}
	mod = B - pow(2, sq);
	// reverse(square.begin(), square.end());
	// bitset<37> square(B);
	// cout << sq << "\n";

	int asd = 2;

	for (int x = 0; x < asd; x++) {
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				for (int k = 0; k < N; k++) {
					calculate_matrix[i][j] += origin_matrix[i][k] * origin_matrix[k][j];
				}
			}
		}

		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				origin_matrix[i][j] = calculate_matrix[i][j];
				
			}
		}
		if (x != asd - 1) {
			for (int i = 0; i < N; i++) {
				for (int j = 0; j < N; j++) {
					calculate_matrix[i][j] = 0;
				}
			}
		}
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cout << calculate_matrix[i][j] << " ";
		}
		cout << "\n";
	}

	for (int i = 0; i < N; i++) {
		free(origin_matrix[i]);
	}
	free(origin_matrix);

	for (int i = 0; i < N; i++) {
		free(calculate_matrix[i]);
	}
	free(calculate_matrix);
}