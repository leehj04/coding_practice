#include <iostream>
#include <memory>

using namespace std;

int main(){
    int subject;
    double max = 0, total = 0.0;
    cin >> subject;
    unique_ptr<double[]> score {new double[subject]};
    for(int i=0; i<subject; i++){
        cin >> score[i];
    }
    for(int i=0; i<subject; i++){
        if(score[i]>max) max = score[i];
    }
    for(int i=0; i<subject; i++){
        score[i] = score[i]/max*100;
        total += score[i];
    }
    cout << total/subject;
}