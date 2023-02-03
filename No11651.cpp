#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(vector<int>&, vector<int>&);

int main() {

    int N;
    cin >> N;
    vector <vector<int>> num(N, vector<int>(2));
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> num[i][j];
        }
    }
    
    sort(num.begin(), num.end(), compare);

    for (int i = 0; i < N; i++) {
        cout << num[i][0] << " " << num[i][1] << "\n";
    }

}

bool compare(vector<int>& v1, vector<int>& v2) {
    if (v1[1] == v2[1]) {
        return v1[0] < v2[0];
    }
    else {
        return v1[1] < v2[1];
    }
}