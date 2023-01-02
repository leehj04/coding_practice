#include <iostream>

using namespace std;

int main(){
    int input[9];
    for(int i=0; i<9; i++){
        cin >> input[i];
    }
    int max_index, max=0;
    for(int i=0; i<9; i++){
        if(input[i]>max){
            max = input[i];
            max_index = i+1;
        }
    }
    cout << max << "\n" << max_index;
}