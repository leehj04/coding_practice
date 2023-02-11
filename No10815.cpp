#include <iostream>
// #include <set>
#include <unordered_set>

using namespace std;

int main() {
	// int N, M, sg, j;
	// cin >> N;
	/*
	// unique_ptr<int[]> number_card = make_unique<int[]>(N);
	for (int i = 0; i < N; i++) {
		cin >> number_card[i];
	}
	cin >> M;
	for (int i = 0; i < M; i++) {
		cin >> sg;
		
		for (j = 0; j < N; j++) {
			if (number_card[j] == sg) {
				cout << 1 << " ";
				break;
			}
		}
		if (j == N) cout << 0 << " ";
		
		
	}
	* 시간초과
	*/
	// 순서가 상관 없으므로, 배열로 저장할 필요가 없다.
	// 입력에 중복 없음. 안에 있는지 없는지 빠른 판단 필요. >> "집합"!!
	// 유일성을 가지고 자동 정렬 되는 컨테이너 "set"이 있다!!!!!

	/*
	int N, M, sg, cd;
	cin >> N;
	set<int> number_card;
	for (int i = 0; i < N; i++) {
		cin >> cd;
		number_card.insert(cd);
	}
	cin >> M;
	for (int i = 0; i < M; i++) {
		cin >> sg;
		cout << number_card.count(sg) << " ";
	}
	* 시간초과
	*/

	/*
	int N, M, sg, cd;
	cin >> N;
	unordered_set<int> number_card;
	for (int i = 0; i < N; i++) {
		cin >> cd;
		number_card.insert(cd);
	}
	cin >> M;
	for (int i = 0; i < M; i++) {
		cin >> sg;
		cout << number_card.count(sg) << " ";
	}
	* 시간초과
	*/
}