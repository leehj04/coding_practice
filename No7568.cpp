#include <iostream>
#include <memory>

using namespace std;

int main() {
    int N;
    cin >> N;
    int** person = new int* [N];
    unique_ptr<int[]> rank = make_unique<int[]>(N);
    for (int i = 0; i < N; i++) {
        person[i] = new int[2];
    }
    for (int i = 0; i < N; i++) {
        rank[i] = 1;
    }
    for (int i = 0; i < N; i++) {
        cin >> person[i][0] >> person[i][1];
    }

    for (int i = 0; i < N - 1; i++) {
        for (int j = i + 1; j < N; j++) {
            if ((person[i][0] < person[j][0]) && (person[i][1] < person[j][1])) {
                rank[i] += 1;
            }
            else if ((person[i][0] > person[j][0]) && (person[i][1] > person[j][1])) {
                rank[j] += 1;
            }
        }
    }

    for (int i = 0; i < N; i++) {
        cout << rank[i] << " ";
    }

    for (int i = 0; i < N; i++) delete[] person[i];
    delete[] person;

}