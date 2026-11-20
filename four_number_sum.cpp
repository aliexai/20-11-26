#include<iostream>
using namespace std;
int main(){
    int numb{0},sum{0},init{0};
    for(init = 1;init<=4;init++){
        cout<<"Enter a Number : ";
        cin>>numb;
        sum=sum+numb;
    }
    cout<<"Sum of Four Numbers : "<<sum<<endl;
    return 0;
}