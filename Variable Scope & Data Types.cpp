#include <iostream>
using namespace std;

int glo = 6;
void sum(){
    int a;
    cout<<glo<<endl;
}

int main() {
    int glo=9;
    glo=78;
    // int a = 14;
    // int b = 15;
    int a=14, b=15;
    float pi=3.14;
    char c='d';
    bool x = true;
    sum();
    cout<<glo<<endl;
    cout<<glo<<x<<endl;
    cout<<"This is tutorial 4.\nHere the value of a is "<<a<<".\nThe value of b is "<<b<<endl;
    cout<<"The value of pi is "<<pi<<endl;
    cout<<"The value of c is "<<c;
    return 0;

}