#include <iostream>

using namespace std;

int main(){
    int x;
    cin >> x;
    int* result = new int[x];
    for(int i=0;i<x;i++){
        int a,b;
        cin >> a >> b;
        result[i] = a+b;
    }
    for(int i=0;i<x;i++){
        cout << result[i] << endl;
    }
    delete[] result;
}