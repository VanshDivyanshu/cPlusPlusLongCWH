#include <iostream>
using namespace std;

/*
float funcAverage(int a, int b){
    float avg = (a + b)/2.0;
    return avg;
}

float funcAverage(int a, float b){
    float avg = (a + b)/2.0;
    return avg;
}
*/

template <class T>
void swapp(T &a, T &b){
    T temp = a;
    a = b;
    b = temp;
}

template <class t1, class t2>
float funcAverage(t1 a, t2 b){
    float avg = (a + b)/2.0;
    return avg;
}

int main(){
    float a;
    a = funcAverage(5, 2.4);    
    cout<<"The average of these numbers is "<< a <<endl;
    int x = 5, y = 7;
    swapp(x, y);
    cout<<x<<endl<<y; 
    return 0;
}