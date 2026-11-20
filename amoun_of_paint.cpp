#include<iostream>
using namespace std;
int main(){
    float number_of_gallon{0},each_wall_rectangular_area{0},length_of_wall{0},width_of_wall{0},total_area_all_wall(0);
    int number_of_wall{4},paint_cover_area {100};
    cout<<"Enter the Length of Rectangular Wall :";
    cin>>length_of_wall;
    cout<<"Enter the width of Rectangular Wall :";
    cin>>width_of_wall;
    each_wall_rectangular_area = length_of_wall*width_of_wall;
    total_area_all_wall = number_of_wall*each_wall_rectangular_area;
    number_of_gallon = total_area_all_wall/paint_cover_area;//Number of Gallons 
    cout<<"Total Number of Gallons for Paint : "<<number_of_gallon<<endl;
    return 0;

}