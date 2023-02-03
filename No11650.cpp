#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(vector<int>&, vector<int>&);

int main() {
    /*
    int N;
    cin >> N;
    vector <vector<int>> coord(N, vector<int> (2));
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> coord[i][j];
        }
    }

    for (int x = N; x > 1; x--) {
        for (int i = 0; i < x - 1; i++) {
            if (coord[i][0] > coord[i + 1][0]) {
                coord[i].swap(coord[i + 1]);
            }
            else if (coord[i][0] == coord[i + 1][0]) {
                if (coord[i][1] > coord[i + 1][1]) {
                    coord[i].swap(coord[i + 1]);
                }
            }
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < 2; j++) {
            cout << coord[i][j] << " ";
        }
        cout << "\n";
    }
    */

/*
   int N, x, y, temp;
    cin >> N;
    vector<int> num;
    for (int i = 0; i < N; i++) {
        cin >> x >> y;
        num.push_back(x);
        num.push_back(y);
    }
    for (int k = 0; k < N; k++) {
        for (int i = 0; i <= 2 * (N - k - 2); i += 2) {
            if (num[i] > num[i + 2]) {
                temp = num[i];
                num[i] = num[i + 2];
                num[i + 2] = temp;
                temp = num[i + 1];
                num[i + 1] = num[i + 3];
                num[i + 3] = temp;
            }
            else if (num[i] == num[i + 2]) {
                if (num[i + 1] > num[i + 3]) {
                    temp = num[i + 1];
                    num[i + 1] = num[i + 3];
                    num[i + 3] = temp;
                }
            }
        }
    }

    for (int i = 0; i < N; i++) {
        cout << num[i * 2] << " " << num[i * 2 + 1] << "\n";
    }
*/

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

bool compare(vector<int> &v1, vector<int> &v2) {
    if (v1[0] == v2[0]) {
        return v1[1] < v2[1];
    }
    else {
        return v1[0] < v2[0];
    }
}