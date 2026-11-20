#include<iostream>
using namespace std;
int main(){
    int numb{0},square{0},cube{0};
    cout<<"Enter a Number :";
    cin>>numb;
    square = numb * numb;
    cube = numb * numb * numb;
    cout<<"Square of "<<numb<<" is : "<<square<<endl;
    cout<<"Cube   of "<<numb<<" is : "<<cube<<endl;
    return 0;
}