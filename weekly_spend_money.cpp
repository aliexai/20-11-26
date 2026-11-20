#include<iostream>
using namespace std;
int main(){
    int week{1};
    float money_per_day{0},total_money_in_week{0};
    for(week =1;week<=7;week++){
        switch(week){
            case 1:{
                cout<<"Enter Amount which spend on Monday : ";
                cin>>money_per_day;   
                total_money_in_week = total_money_in_week + money_per_day;         
                break;
            }
            case 2:{
                cout<<"Enter Amount which spend on Tuesday : ";
                cin>>money_per_day;   
                total_money_in_week = total_money_in_week + money_per_day;           
                break;
            }
            case 3:{
                cout<<"Enter Amount which spend on wednesday : ";
                cin>>money_per_day;   
                total_money_in_week = total_money_in_week + money_per_day;         
                break;
            }
            case 4:{
                cout<<"Enter Amount which spend on Thursday : ";
                cin>>money_per_day;   
                total_money_in_week = total_money_in_week + money_per_day;           
                break;
            }
            case 5:{
                cout<<"Enter Amount which spend on Friday : ";
                cin>>money_per_day;   
                total_money_in_week = total_money_in_week + money_per_day;         
                break;
            }
            case 6:{
                cout<<"Enter Amount which spend on Saturday : ";
                cin>>money_per_day;   
                total_money_in_week = total_money_in_week + money_per_day;           
                break;
            }
            case 7:{
                cout<<"Enter Amount which spend on Sunday : ";
                cin>>money_per_day;   
                total_money_in_week = total_money_in_week + money_per_day;           
                break;
            }           
                    
        }
    }
    cout<<"Your Total Money is Spend in 1 week : "<<total_money_in_week<<endl;
    return 0;
}