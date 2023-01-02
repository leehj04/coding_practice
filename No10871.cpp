#include <iostream>
#include <memory>

using namespace std;

int main(){
    int num, min;
    cin >> num >> min;
    unique_ptr<int[]> input {new int[num]};
    for(int i=0; i<num; i++){
        cin >> input[i];
    }
    for(int i=0; i<num; i++){
        if(input[i] < min) cout << input[i] << " ";
    }
}