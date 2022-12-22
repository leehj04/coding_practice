#include <iostream>

using namespace std;

int main() {
    int h, m;
    int time;
    cin >> h >> m;
    cin >> time;

    if (m + time < 60) {
        cout << h << " " << m + time << endl;
    }
    else if ((h + (m + time) / 60) > 23) {
        cout << (h + (m + time) / 60) - 24 << " " << m + time - 60 * ((m + time) / 60) << endl;
    }
    else {
        cout << h + (m + time) / 60 << " " << m + time - 60 * ((m + time) / 60) << endl;
    }
}