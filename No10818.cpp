#include <iostream>
#include <memory>

using namespace std;

int main(){
    int num;
    cin >> num;
    unique_ptr<int[]> input {new int[num]};
    for(int i=0; i<num; i++){
        cin >> input[i];
    }
    int min=1000000, max=-1000000;
    for(int i=0; i<num; i++){
        if(input[i]<min) min = input[i];
        if(input[i]>max) max = input[i];
    }
    cout << min << " " << max;
}