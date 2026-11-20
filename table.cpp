#include<iostream>
using namespace std;
int main(){
    int numb{0},count{0},result{0};
    cout<<"Enter a Number For Table : ";
    cin>>numb;
    for(count =1 ; count<=10;count++){
        result=numb*count;
        cout<<numb<<" X "<<count<<" = "<<result<<endl;
    }
    return 0;
}