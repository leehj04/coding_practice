#include <iostream>

using namespace std;

int main(){
    int check[30] = {0, };
    int number;
    for(int i=0; i<28; i++){
        cin >> number;
        check[number-1] = 1;
    }
    for(int i=0; i<30; i++){
        if(check[i]==0) cout << i+1 << endl;
    }
}