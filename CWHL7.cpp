#include <iostream>
using namespace std;

int c = 45;

int main()
{   // *********Data Types**********
    // int a, b, c;
    // cout<<"Enter the value of a :"<<endl;
    // cin>>a;
    // cout<<"Enter the value of b :"<<endl;
    // cin>>b;
    // c = a + b;
    // cout<<"The sum is c: "<<c<<endl;
    // cout<<"The global c is: "<<::c;
    // cout<<endl;
    
    // ********* Float, double and long double Literals **********
    // float d = 34.4;
    // long double e = 34.4L;
    // cout<<"The size of 34.4 is "<<sizeof(34.4)<<endl;
    // cout<<"The size of 34.4f is "<<sizeof(34.4f)<<endl;
    // cout<<"The size of 34.4F is "<<sizeof(34.4F)<<endl;
    // cout<<"The size of 34.4l is "<<sizeof(34.4l)<<endl;
    // cout<<"The size of 34.4L is "<<sizeof(34.4L)<<endl;
    

    // ********* Reference Variable **********
    // Rohan Das ----> Monty ----> Rohu ----> Dangerous Coder 
    // float x = 455;
    // float &y = x;
    // cout<<x<<endl;
    // cout<<y<<endl;


     // ********* TypeCasting **********

    int a = 45;
    float b = 45.56;
    cout<<"The value of a is "<<(float)a<<endl;
    cout<<"The value of a is "<<float(a)<<endl;

    cout<<"The value of b is "<<(int)b<<endl;
    cout<<"The value of b is "<<int(b)<<endl;
    int c = int(b);
    cout<<c<<endl;

    cout<<"the expression is "<<a+b<<endl;
    cout<<"the expression is "<<a+int(b)<<endl;
    cout<<"the expression is "<<a+(int)b<<endl;


    return 0;
}

