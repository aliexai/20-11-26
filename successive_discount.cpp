#include<iostream>
using namespace std;
int main(){
    float original_price{0},discount{0},price{0},discounted_price{0},final_price{0},copy(0);
    int init{0},count{0};
    cout<<"Enter Your Original Price of Product : ";
    cin>>original_price;
    copy=original_price;
    for(init =1 ;init<=2;init++){
        count++;
        cout<<"Enter the "<<count<<" Discount in % Percentage Number :";
        cin>>discount;
        price=(discount/100)*copy;
        discounted_price = copy-price;
        copy = discounted_price;
        final_price=copy;
    }
    cout<<"Your Final Amount after the "<<count<<" Number of Discounts :"<<final_price<<endl;
    return 0;
}