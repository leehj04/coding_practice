#include <iostream>
#include <memory>

using namespace std;

int K, N;
bool CheckSum(int*, int);

int main(){
    int std = 0, add = 1;
    cin >> K >> N;
    // unique_ptr<int[]> lan = make_unique<int[]>(K);
    int* lan = new int[K];
    
    for(int i = 0; i < K; i++){
        cin >> lan[i];
        if(lan[i] > std) std = lan[i];
    }
    if(std != 1) std /= 2;
    if(std != 1) add = std / 2;
    
    while(true){
        if(CheckSum(lan, std)) {{
            if(!CheckSum(lan, std + 1)){
                cout << std;
                break;
            }else{
                std += add;
                if(add != 1) add /= 2;
            }
        }
        } else{
            std -= add;
            if(add != 1) add /= 2;
        }
    }
    
    delete[] lan;
    
}

bool CheckSum(int* lan, int std){
    int num = 0;
    for(int i=0; i < K; i++){
        num += lan[i] / std;
    }
    return num >= N;
}
