#include <iostream>

using namespace  std;

int main(){
    int h,m;
    cin >> h >> m;
    if(m>=45){
        cout << h << " ";
        cout << m-45 << endl;
    } else if(h==0){
        cout << "23 ";
        cout << (m-45)+60 << endl;
    } else{
        cout << h-1 << " ";
        cout << (m-45)+60 << endl;
    }
}