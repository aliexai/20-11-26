#include<iostream>
using namespace std;
int main(){
    int marks{0},count{0},init{0};
    float avg{0},sum{0};
    for(init = 1;init <=5;init++){
        count++;
        cout<<"Enter your Subject Marks : ";
        cin>>marks;
        sum = sum+marks;
    }
    avg = sum/count;
    cout<<"Average "<<count<<" Subjects Marks :"<<avg<<endl;
    return 0;
}