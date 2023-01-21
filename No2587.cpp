#include <iostream>

using namespace std;

int main(){
    int num[5];
    int aver = 0, temp;
    for(int i=0; i<5; i++){
        cin >> num[i];
        aver += num[i];
    }
    for(int i=0; i<4; i++){
        for(int j=0; j<5-i-1; j++){
            if(num[j] > num[j+1]){
                temp = num[j+1];
                num[j+1] = num[j];
                num[j] = temp;
            }
        }
    }
        
    cout << aver/5 << "\n"<< num[2];
}
