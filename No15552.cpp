#include <iostream>
#include <memory>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    // sync_with_stdio : c의 stdio와 cpp의 iostream을 동기화시키는 역할을 함
    // -> iostream과 stdio의 버퍼를 모두 사용
    // sync_with_stdio(false) : 동기화 비활성화
    // -> c++만의 독립적인 버퍼 생성, 사용하는 버퍼 수 줄어들어 실행 속도 빨라짐
    // 싱글스레드 환경에서만 사용해야 함
    // 멀티스레드 환경에서 사용할시 출력 순서 보장 불가
    // 실무에서 속도를 올리려면 이것 대신 C 입출력을 사용하는 것이 좋다고 한다.
    cin.tie(NULL);
    // cin과 cout의 묶음을 풀어주는 것 (stream을 untie)
    // cin과 cout은 묶여있는 스트림. 다른 스트림이 IO 작업을 요청할 경우 자동으로 버퍼를 flush
    
    // endl 대신 개행문자 \n을 사용하는 이유
    // endl : 개행문자 출력 + 출력 버퍼를 비우는 역할

    int num;
    cin >> num;
    std::unique_ptr<int[]> result {new int[num]};
    for(int i=0; i<num; i++){
        int x,y;
        cin >> x >> y;
        result[i] = x+y;
    }
    for(int i=0; i<num; i++){
        cout << result[i] << '\n';
    }
}