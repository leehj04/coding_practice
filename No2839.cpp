#include <iostream>

using namespace std;

int main(){
    int N;
    cin >> N;
    int num3 = 0, num5 = 0;
    num5 = N/5;
    while(true){
        if(num5 == -1){
            cout << -1;
            break;
        }
        if((N - 5*num5) % 3 == 0){
            num3 = (N - 5*num5)/3;
            cout << num5 + num3;
            break;
        }else{
            num5--;
        }
    }
}