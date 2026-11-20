#include<iostream>
using namespace std;
int main(){
    int total_segment{3},segment{0},count(0);
    float speed{0},time{0},total_distance_covered{0},distance{0};
    for(segment = 1;segment<=total_segment;segment++){
        count++;
        cout<<"Enter Segment "<<count<<" Speed :";
        cin>>speed;
        cout<<"Enter Segment "<<count<<" Time :";
        cin>>time;
        distance = speed*time;
        total_distance_covered = distance+total_distance_covered;
    }
    cout<<"Total Distance Covered = "<<total_distance_covered<<endl;
    return 0;
}