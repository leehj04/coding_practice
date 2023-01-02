#include <iostream>
#include <memory>
#include <cmath>

using namespace std;

int main(){
    int num, stu;
    double over_aver = 0.0, sum = 0.0, aver;
    cin >> num;
    for(int i=0; i<num; i++){
        cin >> stu;
        unique_ptr<int[]> score {new int[stu]};
        for(int j=0; j<stu; j++){
            cin >> score[j];
            sum += score[j];
        }
        aver = sum / stu;
        for(int j=0; j<stu; j++){
            if(score[j]>aver) over_aver++;
        }
        printf("%.3lf\%\n", (over_aver/stu)*100);
        over_aver = 0; sum = 0; aver = 0;
    }
}