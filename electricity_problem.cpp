#include<iostream>
using namespace std;
int main(){
    double consumed_units_befor_month{0},consumed_units_after_month{0},total_units_consumed{0};
    cout<<"Enter the Meter Reading Before the Month :";
    cin>>consumed_units_befor_month;
    cout<<"Enter the Meter Reading After the Month :";
    cin>>consumed_units_after_month;
    total_units_consumed=consumed_units_after_month-consumed_units_befor_month;
    cout<<total_units_consumed<<" Units are Consumed in this Month "<<endl;
    return 0;
}