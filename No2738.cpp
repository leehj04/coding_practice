#include <iostream>
#include <memory>

using namespace std;

int main(){
    int N, M;
    cin >> N >> M;
    unique_ptr<unique_ptr<int[]>[]> matrixA = make_unique<unique_ptr<int[]>[]>(N);
    unique_ptr<unique_ptr<int[]>[]> matrixB = make_unique<unique_ptr<int[]>[]>(N);
    
    for(int i=0; i<N;i++){
        matrixA[i] = make_unique<int[]>(M);
        matrixB[i] = make_unique<int[]>(M);
    }

    for(int i = 0; i<N; i++){
        for(int j=0; j<M;j++){
            cin >> matrixA[i][j];
        }
    }
    for(int i = 0; i<N; i++){
        for(int j=0; j<M;j++){
            cin >> matrixB[i][j];
        }
    }
    for(int i = 0; i<N; i++){
        for(int j=0; j<M;j++){
            cout << matrixA[i][j] + matrixB[i][j] << " ";
        }
        cout << endl;
    }
}