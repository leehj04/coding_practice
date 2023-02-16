#include <iostream>
#include <algorithm>

/*
 int N;
 using namespace std;
 
 
 void Square(int**, int**, int**);
 
 int main(){
 int B;
 cin >> N >> B;
 int** origin_matrix = (int**)malloc(sizeof(int*) * N);
 for(int i=0; i<N; i++){
 origin_matrix[i] = (int*)malloc(sizeof(int) * N);
 }
 
 int** calculate_matrix = (int**)malloc(sizeof(int*) * N);
 for(int i=0; i<N; i++){
 calculate_matrix[i] = (int*)malloc(sizeof(int*) * N);
 }
 
 int** answer = (int**)calloc(N, sizeof(int*));
 for(int i=0; i<N; i++){
 answer[i] = (int*)calloc(N, sizeof(int));
 }
 
 for(int i=0; i<N; i++){
 for(int j=0; j<N; j++){
 cin >> origin_matrix[i][j];
 calculate_matrix[i][j] = origin_matrix[i][j];
 }
 }
 
 for(int i=1; i<B; i++){
 Square(answer, calculate_matrix, origin_matrix);
 if(i != B-1){
 for(int i=0; i<N; i++){
 for(int j=0; j<N; j++){
 answer[i][j] = 0;
 }
 }
 }
 // copy(&answer[0][0], &answer[0][0] + (N * N), &matrix[0][0]);
 }
 
 for(int i=0; i<N; i++){
 for(int j=0; j<N; j++){
 cout << answer[i][j] << " ";
 }
 cout << "\n";
 }
 
 
 for(int i=0; i<N; i++){
 free(origin_matrix[i]);
 }
 free(origin_matrix);
 
 for(int i=0; i<N; i++){
 free(calculate_matrix[i]);
 }
 free(calculate_matrix);
 
 for(int i=0; i<N; i++){
 free(answer[i]);
 }
 free(answer);
 }
 
 void Square(int** answer, int** calculate_matrix, int** origin_matrix){
 
 for(int i=0; i<N; i++){
 for(int j=0; j<N; j++){
 for(int k=0; k<N; k++){
 answer[i][j] = ((answer[i][j] % 1000) + ((((calculate_matrix[i][k] % 1000) * (origin_matrix[k][j] % 1000)) % 1000) % 1000)) % 1000;
 }
 }
 }
 
 for(int i=0; i<N; i++){
 for(int j=0; j<N; j++){
 calculate_matrix[i][j] = answer[i][j];
 }
 }
 
 
 }
 
 * 정말 n번 제곱하는 단순 구현
 * B가 너무 크기 때문에 시간 초과로 다른 방법을 찾아야 함
 */

