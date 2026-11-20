#include<iostream>
using namespace std;
int main(){
    float pay_of_employee{0},hours{0},rate_per_hour{0};
    cout<<"Enter the Worked Hours : ";
    cin>>hours;
    cout<<"Enter the rate per hour : ";
    cin>>rate_per_hour;
    pay_of_employee = hours*rate_per_hour;
    cout<<pay_of_employee<<" is Pay of Employee "<<endl;
    return 0;
}