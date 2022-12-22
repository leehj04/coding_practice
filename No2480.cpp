#include <iostream>

using namespace std;

int main(){
    int x,y,z;
    cin >> x >> y >> z;
    if((x==y) && (y==z)){
        cout << 10000 + x*1000 << endl;
    } else if(x==y){
        cout << 1000 + x*100 << endl;
    } else if(y==z){
        cout << 1000 + y*100 << endl;
    } else if(z==x){
        cout << 1000 + z*100 << endl;
    } else{
        cout << max(max(x,y),z)*100 << endl;
    }
}