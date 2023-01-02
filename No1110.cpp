#include <iostream>

using namespace std;

int main(){
    int x, start, temp, num=0;
    cin >> x;
    start = x;
    while(true){
        num++;
        temp = ((x%10)*10) + ((x/10 + x%10)%10);
        if(temp==start){
            cout << num;
            break;
        }
        x = temp;
    }
}