#include<iostream>
using namespace std;
int main(){
    float purchase_item_amount{0},advance_amount{0},remaning_balance{0};
    cout<<"Enter your Purchased Amount Price :";
    cin>>purchase_item_amount;
    cout<<"Enter your Advance Amount you Payed :";
    cin>>advance_amount;
    remaning_balance=purchase_item_amount-advance_amount;
    cout<<"Your Remainig Balance is : "<<remaning_balance<<endl;
    return 0;
}