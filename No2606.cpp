#include <iostream>
#include <vector>

using namespace std;

int vertex, edge, infection = -1;
vector<pair<int, int>> network;

void DFS(bool*, int);

int main() {
	int x, y;
	cin >> vertex >> edge;
	bool* check = new bool[vertex + 1];
	for (int i = 0; i < vertex + 1; i++) check[i] = false;

	for (int i = 0; i < edge; i++) {
		cin >> x >> y;
		network.push_back(make_pair(x, y));
		network.push_back(make_pair(y, x));
	}
	
	DFS(check, 1);
	cout << infection;

	delete[] check;
}

void DFS(bool* check, int com) {
	int next;
	check[com] = true;
	infection += 1;
	for (int i = 0; i < edge * 2; i++) {
		if (network[i].first == com) {
			if (check[network[i].second] == false) {
				DFS(check, network[i].second);
			}
		}
	}
}