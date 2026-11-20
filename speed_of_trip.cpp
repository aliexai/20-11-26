#include<iostream>
using namespace std;
int main(){
    float going_speed_const{0},back_speed_const{0},avg_speed{0};
    cout<<"When you go City(A) to City(B) Enter the Speed in Km/h : ";
    cin>>going_speed_const;
    cout<<"When you back City(A) to City(B) Enter the Speed in Km/h : ";
    cin>>back_speed_const;
    avg_speed=(going_speed_const+back_speed_const)/2;
    cout<<"Your Average Speed is = "<<avg_speed<<endl;
    return 0;
}