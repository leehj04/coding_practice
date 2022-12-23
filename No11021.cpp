#include <iostream>
#include <memory>

using namespace std;

int main() {
    int num;
    cin >> num;
    std::unique_ptr<int[]> result {new int[num]};
    for(int i=0; i<num; i++){
        int x,y;
        cin >> x >> y;
        result[i] = x+y;
    }
    for(int i=0; i<num; i++){
        cout << "Case #" << i+1 << ": " << result[i] << endl;
    }
}