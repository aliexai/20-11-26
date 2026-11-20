#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    float chemical{0},amount{0},price_1{0},price_2{0},chemical_2{0},total_ratio{0};
    int count{0},init{0};
    cout<<"Enter the Amount of Chemical :";
    cin>>amount;
    cout<<"Enter the chemical Value 1 : ";
    cin>>chemical;
    cout<<"Enter the chemical Value 2 : ";
    cin>>chemical_2;
    total_ratio=chemical+chemical_2;
    price_1 = (chemical/total_ratio)*amount;
    price_2 = (chemical_2/total_ratio)*amount;
    cout<<fixed<<setprecision(2);
    cout<<"Price for Chemical 1 : "<<price_1<<endl;
    cout<<"Price for Chemical 2 : "<<price_2<<endl;
    return 0;    
}