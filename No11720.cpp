#include <iostream>
#include <memory>

using namespace std;

int main(){
    int count, sum = 0;
    cin >> count;
    string num;
    cin >> num;
    for(int i=0; i<count; i++){
        sum += num[i]-48;
    }
    cout << sum;
}