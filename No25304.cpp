#include <iostream>

using namespace std;

int main(){
    int total, num;
    int sum = 0;
    cin >> total >> num;
    for(int i=0; i<num; i++){
        int x,y;
        cin >> x >> y;
        sum += x*y;
    }
    (sum==total) ? (cout << "Yes" << endl) : (cout << "No" << endl);
}