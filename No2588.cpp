#include <iostream>

using namespace std;

int main(){
    int x,y;

    cin >> x >> y;
    cout << x*(y%10) << endl;
    cout << x*((y/10)%10) << endl;
    cout << x*(y/100) << endl;
    
    cout << (x*(y%10)) + (x*((y/10)%10))*10 + (x*(y/100))*100 << endl;
}