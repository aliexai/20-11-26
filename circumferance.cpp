#include<iostream>
using namespace std;
int main(){
    float radius{0},pi{3.1415},circumferance{0};
    cout<<"Enter the Radius of the Circle :";
    cin>>radius;
    circumferance=2*pi*radius;
    cout<<"Circumferance of the Circle : "<<circumferance<<endl;
    return 0;
}