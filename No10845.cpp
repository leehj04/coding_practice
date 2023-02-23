#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main() {
	int N, num;
	string cmd;
	queue<int> q;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> cmd;
		if (cmd.compare("push") == 0) {
			cin >> num;
			q.push(num);
		}
		else if (cmd.compare("pop") == 0) {
			if (q.size() == 0) cout << -1 << "\n";
			else {
				cout << q.front() << "\n";
				q.pop();
			}
		}
		else if (cmd.compare("size") == 0) {
			cout << q.size() << "\n";
		}
		else if (cmd.compare("empty") == 0) {
			if (q.empty() == true) cout << 1 << "\n";
			else cout << 0 << "\n";
		}
		else if (cmd.compare("front") == 0) {
			if (q.size() == 0) cout << -1 << "\n";
			else cout << q.front() << "\n";
		}
		else if (cmd.compare("back") == 0) {
			if (q.size() == 0) cout << -1 << "\n";
			else cout << q.back() << "\n";
		}
	}
}
