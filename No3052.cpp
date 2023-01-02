#include <iostream>

using namespace std;

int main(){
    int remain[42] = {0,};
    int num, count = 0;
    for(int i=0; i<10; i++){
        cin >> num;
        remain[num%42] = 1;
    }
    for(int i=0; i<42; i++){
        if(remain[i]==1) count++;
    }
    cout << count;
}