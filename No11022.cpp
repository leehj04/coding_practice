#include <iostream>
#include <memory>

using namespace std;

int main() {
    int num;
    cin >> num;
    std::unique_ptr<int[]>value_x {new int[num]};
    std::unique_ptr<int[]>value_y {new int[num]};
    for(int i=0; i<num; i++){
        cin >> value_x[i] >> value_y[i];
    }
    for(int i=0; i<num; i++){
        cout << "Case #" << i+1 << ": " << value_x[i] << " + " << value_y[i] << " = " << value_x[i]+value_y[i] << endl;
    }
    
}