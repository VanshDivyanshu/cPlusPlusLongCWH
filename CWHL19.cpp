#include <iostream>
using namespace std;

int sum(int a, int b){
    cout<<"This uses 2 arguments "<<endl;
    return a + b;
}

int sum(int a, int b, int c){
    cout<<"This uses 3 arguments "<<endl;
    return a + b;
}

// Volume of cuboid
int volume (double r, int h){
    return(3.14 * r *r *h);
}

// Volume of cube 
int volume (int a){
    return (a*a*a);
}

// Volume of rectangle 
int volume (int l, int b, int h){
    return (l*b*h);
}

int main(){
    cout<<"The sum of 3 and 6 is "<<sum(3,6)<<endl;
    cout<<"The sum of 3, 7 and 6 is "<<sum(3,7,6)<<endl;
    cout<<"Volume of cuboid (3,4,3): "<<volume(3,4,3)<<endl; 
    cout<<"Volume of cube (3,4): "<<volume(3,4)<<endl; 
    cout<<"Volume of rectangle (3,4,3): "<<volume(3,4,3)<<endl; 
    return 0;
}