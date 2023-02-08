#include <iostream>
#include <string>

using namespace std;

bool ThreeSix(string);

int main() {
	int N, i = 1, title = 666;
	cin >> N;
	
	
	while (true) {
		if ((ThreeSix(to_string(title))) && (i == N)) {
			cout << title;
			break;
		}
		else if (ThreeSix(to_string(title))) {
			i += 1;
			title += 1;
		}
		else {
			title += 1;
		}
	}
	
}

bool ThreeSix(string str) {
	int num = 0;
	for (int i = 0; i < str.length() - 2; i++) {
		if ((str[i] == '6') && (str[i + 1] == '6') && (str[i + 2] == '6'))  num += 1;
	}
	return num >= 1;
}