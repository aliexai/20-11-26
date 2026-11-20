#include<iostream>
using namespace std;
int main(){
    float original_price{0},final_price{0},percentage{0},discount{0};
    cout<<"Enter the Amount of Original Price :";
    cin>>original_price;
    cout<<"Enter the Discount % Percentage in Number :";
    cin>>percentage;
    discount = (original_price)*(percentage/100);
    final_price = original_price - discount;
    cout<<"Final Amount after the Discount : "<<final_price<<endl;
    return 0;
}