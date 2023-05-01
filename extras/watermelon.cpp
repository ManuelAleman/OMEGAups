#include "iostream"
using namespace std;
int water(){
    int w;
    cin>>w;

    if(w%2==0 && w>2){
        cout<<"SI";
    }else{
        cout<<"NO";
    }

    return 0;
}