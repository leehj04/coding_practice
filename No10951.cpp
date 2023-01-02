#include <iostream>
#include <string>

using namespace std;

int main(){
    int x,y;
    while(true){
        cin >> x >> y;
        if(cin.eof()==true) break;
        // 인터넷 서치하다가 답을 봐버렸다..!!!
        // cin.eof() : 파일의 끝을 의미하는 EOF를 읽으면 true를 반환하는 함수.
        cout << x+y << endl;
    }
}
