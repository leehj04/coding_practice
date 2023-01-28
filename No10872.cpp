#include <iostream>

using namespace std;

int fac(int x){
    if(x==0) return 1;
    return x * fac(x-1);
}

int main(){
    int N;
    cin >> N;
    cout << fac(N);
}
