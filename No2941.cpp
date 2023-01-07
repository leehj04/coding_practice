#include <iostream>
#include <string>

using namespace std;

int main(){
    string alpb;
    cin >> alpb;
    int num = 0;
    for(int i=0; i<alpb.length(); i++){
        switch(alpb[i]){
            case 'c':
                if((alpb[i+1] == '=') || (alpb[i+1] == '-')){
                    num++;
                    i++;
                } else{
                    num++;
                }
                break;
            case 'd':
                if((alpb[i+1] == 'z') && (alpb[i+2] == '=')){
                    num++;
                    i += 2;
                } else if (alpb[i+1] == '-'){
                    num++;
                    i++;
                } else{
                    num++;
                }
                break;
            case 'l':
            case 'n':
                if(alpb[i+1] == 'j'){
                    num++;
                    i++;
                } else{
                    num++;
                }
                break;
            case 's':
            case 'z':
                if(alpb[i+1] == '='){
                    num++;
                    i++;
                } else{
                    num++;
                }
                break;
            default:
                num++;
        }
    }
    cout << num;
}