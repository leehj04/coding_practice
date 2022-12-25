#include <iostream>
#include <string>

using namespace std;

int main(){
    char x,y;
    while(true){
        // cin은 엔터를 받으면 입력 종료로 처리하기 때문에, x에 엔터를 담으려면 get이나 getline을 써야함
        // get은 문자, getline은 문자열을 받는 함수이므로 당연히 x,y도 int가 아니고 해당하는 변수형로 선언!
        x = cin.get();
        if((x=='\n')||(x==' ')) break;
        cin.get();
        y = cin.get();
        if((y=='\n')||(y==' ')) break;
        cin.get();
        // 현재 입력 format이 x-띄어쓰기-y-엔터 이기 때문에
        // x 받고 - 문자 하나 버리고 - y 받고 - 문자 하나 버리고
        // 이런 순서로 4번을 받았다
        cout << (x-48) + (y-48) << endl;
        // x와 y가 char형이므로 '0'의 아스키코드인 48을 빼서 숫자로 바꿔주기
    }
}
