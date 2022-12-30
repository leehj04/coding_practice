#include <iostream>
#include <memory>

using namespace std;

int main(){
    int count, search, num=0;
    cin >> count;
    unique_ptr<int[]> input {new int[count]};
    for(int i=0; i<count; i++){
        cin >> input[i];
    }
    cin >> search;
    for(int i=0; i<count; i++){
        if(input[i]==search) num++;
    }
    cout << num << endl;
}
