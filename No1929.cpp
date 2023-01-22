#include <iostream>
#include <cmath>
#include <memory>

using namespace std;

int main() {
    int min, max;
    cin >> min >> max;

    /*
    // 방법 1. 모든 숫자를 방문해 2~자기자신/2 까지 나눠보기

    for (int i = min; i <= max; i++) {
        if (i == 1) continue;
        if (i == 2 || i == 3) {
            cout << i << "\n";
            continue;
        }
        for (int j = 2; j < i / 2 + 1; j++) {
            // 풀다보니 생각이 나는 것 : 어차피 1/2 이상인 수로는 안나눠짐.
            // -> i/2 까지만 나눠봐도 괜찮다는 소리
            // 근데 3은 /2하면 1 이고 +1 해도 2라서 반복문이 안돌아서 예외로 뺐다.
            // 모든 수를 끝까지 다 나눠보는 것보단 반만 돌고 3을 예외로 빼는게 빠르지 않을까?
            if (i % j == 0) break;
            if (j == i / 2) cout << i << "\n";
        }
    }
    // 시간 초과. 반복문을 무작정 돌면 안되는 걸까?

    // 방법 2. 2부터 max까지 돌면서 모든 숫자를 나눠보기

    int num = max - min + 1;
    unique_ptr<int[]> check{ new int[num] };

    for (int i = 0; i < num; i++) check[i] = 0;

    for (int div = 2; div < max; div++) {
        for (int i = min; i <= max; i++) {
            if (i != div && i % div == 0) {
                check[i - min] = 1;
            }
        }
    }

    for (int i = 0; i < num; i++) {
        if (check[i] == 0) cout << i + min << "\n";
    }
    // 이것도 시간 초과.
    */

    // 검색을 좀 해보았다... 소수의 특징에는 무엇이 있는가?
    // => sqrt(n) (=루트n) 보다 작거나 같은 수로 나누어지지 않으면 n은 소수이다.
    // 왜?
    // 약수는 대칭적임. n이 a로 나누어짐과 동시에 n은 n/a으로 나누어짐.
    // n이 x*y로 표현된다고 하면 x==y일 때 min(x,y)가 가장 큼

    // 방법 3. 모든 숫자를 2부터 루트n까지 나눠본다.
    /*
    for (int i = min; i <= max; i++) {
        if (i == 1) continue;
        if (i == 2 || i == 3) {
            cout << i << endl;
            continue;
        }
        for (int j = 2; j <= sqrt(i); j++) {
            if (i % j == 0) break;
            if (j == floor(sqrt(i))) cout << i << endl;
        }
    }
    */
    // 반복문을 훨씬 덜 돌았다고 생각했는데 여전히 시간 초과

    // 방법 4. 에라토스테네스의 체
    // 사실 방법 2에서 구현하고 싶었던 건데, 코드 구현이 명확하지 못해서 과도하게 반복문을 돈 것 같다.
    // 나누는 수, 즉 체 역할을 하는 수를 '선별'해야 한다

    /*
    int key=1, j;
    unique_ptr<int[]> check = make_unique<int[]>(max+1);

    check[0] = 1;
    check[1] = 1;
    
    if(max >= 2){
        for(int i=2; i<max+1; i++){
            check[i] = 0;
        }
    }

    while(true){
        for(j=key+1; j < max+1; j++){
            if(check[j] == 0) {
                key = j;
                break;
            }
        }

        if(j == max+1) break;
        // key가 바뀌지 않았으면 남은 모든 수가 소수가 아니라는 뜻이므로 종료
        
        for(int i=key+1; i < max+1; i++){
            if(check[i] == 0 && i % key == 0) check[i] = 1;
            // check[i-key] != 0 이면 판단을 안해도 되기 때문에 앞에 썼다
        }
    }
    
    for(int i = min; i < max+1; i++){
        if(check[i] == 0) cout << i << endl;
    }
    */
   // 이것도 시간초과랜다... 너갱이가 나갔댄다

}