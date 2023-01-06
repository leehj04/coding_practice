#include <iostream>
#include <string>

using namespace std;

int main(){
    int testNum;
    cin >> testNum;
    int repeat;
    string test;
    for(int i=0; i<testNum; i++){
        cin >> repeat >> test;
        for(int j=0; j<test.length(); j++){
            for(int k=0; k<repeat; k++){
                cout << test[j];
            }
        }
        cout << endl;
    }
}