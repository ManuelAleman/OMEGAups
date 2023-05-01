#include "iostream"
#include "vector"
using namespace std;

int febrero1(){
    int year;
    vector<int> days;
    for (int i = 0; i < 4; ++i) {
        cin>>year;
        if(year%4==0){
            if(year%100==0){
                if(year%400==0){
                    days.push_back(29);
                }else{
                    days.push_back(28);
                }
            }else{
                days.push_back(29);
            }
        }else{
            days.push_back(28);
        }
    }

    for(int x: days){
        cout<<x<<" ";
    }
    return 0;
}