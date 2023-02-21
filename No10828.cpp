#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
	int N, num;
	string cmd;
	stack<int> x;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> cmd;
		// c++에서는 연산자 오버로딩으로 string에 == 사용 가능 (compare과 기능 동일)
		if (cmd.compare("push") == 0) {
			cin >> num;
			x.push(num);
		}
		else if (cmd.compare("pop") == 0) {
			if (x.size() == 0) cout << -1;
			else {
				cout << x.top();
				x.pop();
			}
			cout << "\n";
		}
		else if (cmd.compare("size") == 0) {
			cout << x.size();
			cout << "\n";
		}
		else if (cmd.compare("empty") == 0) {
			if (x.empty() == true) cout << 1;
			else cout << 0;
			cout << "\n";
		}
		else if (cmd.compare("top") == 0) {
			if (x.size() == 0) cout << -1;
			else cout << x.top();
			cout << "\n";
		}
	}
}