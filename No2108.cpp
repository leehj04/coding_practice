#include <iostream>
#include <memory>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    int N, min = 4000, max = -4000;
    double sum = 0;
    cin >> N;
    if (N == 1) {
        cin >> sum;
        cout << sum << "\n" << sum << "\n" << sum << "\n" << 0;
        return 0;
    }
    int* num = (int*)calloc(N, sizeof(int));
    // unique_ptr<int[]> num = make_unique<int[]>(N);
    vector<vector<int>> count(N, vector<int>(2, 0));
    // 벡터를 N행 2열로 만들고, 0으로 채운다.

    for (int i = 0; i < N; i++) {
        cin >> num[i];
        if (min > num[i]) min = num[i];
        if (max < num[i]) max = num[i];
        sum += num[i];
    }

    sort(num, num + N);

    if (round(sum / N) == -0) cout << 0 << "\n";
    else printf("%.0f \n", round(sum / N));
    cout << num[N / 2] << "\n";
    


    // 퀵 소트를 시도해보자.
    // 퀵 소트는 pivot을 정해서 pivot보다 작으면 왼쪽, 크면 오른쪽에 모는 개념이다
    // 

    /*
    int j, maxCount = 0, maxPos = 0;

    for(int i=0; i<N; i++){
        for(j=0; j<N; j++){
            if(count[j][0] == num[i]){
                count[j][1] += 1;
                break;
            }
        }
        if(j == N) {
            count[i][0] = num[i];
            count[i][1] += 1;
        }
    }

    for(int i=0; i=N; i++){
        if()
    }
    */
    int i = 0, j = 0, maxCount = 0;
    vector<int> maxPos;

    while(true) {
    //for (int i = 0; i < N; i++) {
        if (i > N - 1) break;
        if (num[i] == num[i + 1]) {
            j++;
        }
        else  {
            j += 1;
            i = j - 1;
            if (maxCount != 0) continue;
            else i += 1;
        }
        if (j - i > maxCount) {
            maxCount = j - i;
            maxPos.clear();
            maxPos.push_back(num[i]);
            // i -= 1;
            //cout << num[i] << "asdfasd\n";
        }
        else if (j - i == maxCount) {
            if (maxCount == 0) {
                // i -= 1;
                maxPos.push_back(num[i-1]); 
            }
            else {
                maxPos.push_back(num[i]);
                // i -= 1;
            }
            
            // cout << num[i] << "ndfgndd\n";
        }
    }

    /*
    cout << maxPos.size() << "\n";

    //sort(maxPos.begin(), maxPos.begin() + maxPos.size());

    for (int i = 0; i < 3; i++) {
        cout << maxPos[i] << "ngngdf\n";
    }
    */
    
    if (maxPos.size() > 1) cout << maxPos[1] << "\n";
    else cout << maxPos[0] << "\n";
    

    cout << max - min;

    free(num);

}