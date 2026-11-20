#include<iostream>
using namespace std;
int main(){
    float radius{0},pi{3.1415},area{0};
    cout<<"Enter the Radius of Circle :";
    cin>>radius;
    area = pi*radius*radius;
    cout<<"Area of Circle is "<<area<<endl;
    return 0;
}