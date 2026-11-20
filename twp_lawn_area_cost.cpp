#include<iostream>
using namespace std;
int main(){
    float sod_cost{0},sod_per_square_cost{0},length_lawn{0},width_lawn{0},area_of_lawn{0},total_cost{0};
    int init{0},count{0};
    cout<<"Enter the Sod Cost Per Square Feet of Lawn :";
    cin>>sod_per_square_cost;
    for (init = 1;init<=2;init++){
        count++;
        cout<<"Enter the Length of the Lawn "<<count<<" :";
        cin>>length_lawn;
        cout<<"Enter the Width of the Lawn "<<count<<" :";
        cin>>width_lawn;
        area_of_lawn=length_lawn*width_lawn;
        sod_cost=area_of_lawn*sod_per_square_cost;
        total_cost=total_cost+sod_cost;
        cout<<"Your Lawn "<<count<<" Sod Cost = "<<sod_cost<<endl;
    }
    cout<<"Your Total Cost = "<<total_cost<<endl;
    return 0;
}