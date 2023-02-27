#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <queue>

using namespace std;

// DFS : 깊이 우선 탐색(최대한 깊이 내려간 후, 더이상 깉이 갈 곳이 없을 경우 옆으로 이동)
// BFS : 너비 우선 탐색(최대한 넓게 이동한 다음, 더이상 갈 수 없을 때 아래로 이동)

int N, M, V;
vector<pair<int, int>> vertex;
void DFS(bool*, int);
void BFS(bool*, int);

int main() {
	int x, y;
	cin >> N >> M >> V;
	bool* visited = new bool[N + 1];
	for (int i = 0; i < N + 1; i++) {
		visited[i] = false;
	}
	
	// vector<int> vertex = new vector<int>[N];
	for (int i = 0; i < M; i++) {
		cin >> x >> y;
		vertex.push_back(make_pair(x, y));
		vertex.push_back(make_pair(y, x));
	}

	sort(vertex.begin(), vertex.end());
	// first 값을 기준으로 오름차순, first 값이 같을 때는 second 값을 기준으로 오름차순
	// 정점 번호가 작은 것부터 방문하기 위함
	
	DFS(visited, V);
	cout << "\n";

	for (int i = 0; i < N + 1; i++) {
		visited[i] = false;
	}

	BFS(visited, V);

	delete[] visited;
}

void DFS(bool* visited, int start) {
	int next;
	visited[start] = true;
	cout << start << " ";
	for (int i = 0; i < 2 * M; i++) {
		if (vertex[i].first == start) {
			next = vertex[i].second;
			if(visited[next] == false) DFS(visited, next);
		}
	}
}

void BFS(bool* visited, int start) {
	int x, plus;
	queue<int> q;
	q.push(start);
	visited[start] = true;
	while (q.empty() == false) {
		// 맨 앞에 걸 꺼낸다.
		x = q.front();
		q.pop();
		cout << x << " ";
		for (int i = 0; i < 2 * M; i++) {
			if (vertex[i].first == x) {
				plus = vertex[i].second;
				// 꺼낸 것과 연결된 것 중에 아직 방문하지 않은 게 있으면 큐에 넣는다.
				if (visited[plus] == false) {
					q.push(plus);
					visited[plus] = true;
				}
			}
		}
	}
}