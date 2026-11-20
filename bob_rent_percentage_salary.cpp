#include<iostream>
using namespace std;
int main(){
    float percentage{0},income{0},rent{0};
    cout<<"Enter Your Income :";
    cin>>income;
    cout<<"Enter your Rent :";
    cin>>rent;
    percentage=(rent/income)*100;
    cout<<percentage<<" % your percentage ."<<endl;
    return 0;
}
