#include<iostream>
using namespace std;
int main(){
    float celsius_temp{0},faranheit_temp{0};
    cout<<"Enter Temperature in Celsius :";
    cin>>celsius_temp;
    faranheit_temp=(float(9)/5*celsius_temp)+32;
    cout<<celsius_temp<<" Celsius Temperature = "<<faranheit_temp<<" Faranheit Temperature"<<endl;
    return 0;
}