#include <iostream>
#include <memory>

using namespace std;

int main(){
    int N, k, temp;
    cin >> N >> k;
    unique_ptr<int[]> score = make_unique<int[]>(N);
    for(int i=0; i<N; i++){
        cin >> score[i];
    }
    for(int i=0; i<N-1; i++){
        for(int j=0; j<N-i-1; j++){
            if(score[j]<score[j+1]){
                temp = score[j];
                score[j] = score[j+1];
                score[j+1] = temp;
            }
        }
    }

    cout << score[k-1];
}
