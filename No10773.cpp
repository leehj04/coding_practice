#include <iostream>
#include <stack>

using namespace std;

int main(){
    int K, num, sum = 0;
    stack<int> money;
    cin >> K;
    for(int i=0; i<K; i++){
        cin >> num;
        if(num == 0){
            sum -= money.top();
            money.pop();
        }
        else{
            money.push(num);
            sum += num;
        }
    }
    cout << sum;
    // cout << accumulate(money.begin(), money.end(), 0.0);
}
