#include<iostream>
using namespace std;
int main(){
    float basic_salary{0},medical_allowance{0},house_rent{0},total_slary{0};
    cout<<"Enter your Basic Salary :";
    cin>>basic_salary;
    cout<<"Enter your Medical Allowance :";
    cin>>medical_allowance;
    cout<<"Enter your House Rent :";
    cin>>house_rent;
    total_slary=basic_salary+medical_allowance+house_rent;
    cout<<"Your Total Salary is = "<<total_slary<<endl;
    return 0;
}