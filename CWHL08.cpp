#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // int a = 34;
    // char c = 'c';
    // cout<<"The value of a was: "<<a<<endl;
    // cout<<"The value of c was: "<<c<<endl;
    // a = 45;
    // c = 'd';
    // cout<<"The value of a is: "<<a<<endl;
    // cout<<"The value of c is: "<<c<<endl;

// Constants in C++
    // const float x = 3.14;
    // cout<<"The value of a was: "<<a<<endl;
    // x = 2.33;
    // cout<<"The value of a is: "<<a<<endl;


// Manipulators in C++
    // int a = 3, b = 78, c = 1233;
    // cout<<"The value of a without setw is: "<<a<<endl;
    // cout<<"The value of b without setw is: "<<b<<endl;
    // cout<<"The value of c without setw is: "<<c<<endl;

    // cout<<"The value of a is: "<<setw(4)<<a<<endl;
    // cout<<"The value of b is: "<<setw(4)<<b<<endl;
    // cout<<"The value of c is: "<<setw(4)<<c<<endl;


// Operator precedence 
    int a = 3, b = 4;
    //int c = (a*5)+b;
    int c = ((((a*5)+b)-45)+87);
    cout<<c;
    return 0;
}
