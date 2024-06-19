// There are two types of header files:
// 1.System header files: It comes with the compiler
#include <iostream>
// 2.User defined header files: It is written by the programmer
// #include "this.h" //->This will produce an error if thi.h is not present in the current directory
using namespace std;

int main()
{   
    int a = 4, b = 5;
    cout << "Operators in C++ :" << endl;
    cout << "Following are the types of operators in C++ :-" << endl;
    // Arithmetic operators
    // cout<<"Following are the arithmetic operators in C++"<<endl;
    // cout << "The value of a+b is " << a + b << endl;
    // cout << "The value of a-b is " << a - b << endl;
    // cout << "The value of a*b is " << a * b << endl;
    // cout << "The value of a/b is " << a / b << endl;
    // cout << "The value of a%b is " << a%b << endl;
    // cout << "The value of a++ is " << a++ << endl;
    // cout << "The value of a+- is " << a++ << endl;
    // cout << "The value of --a is " << --a << endl;
    // cout << "The value of ++a is " << ++a << endl;
    // cout<<endl;

    // Assignment operators
    // int a = 3, b = -3;
    // char d = 'd';

    // Comparison operators 
    cout<<"Following are the comparison operators in C++"<<endl;
    cout<<"The value of a == b is "<<(a==b)<<endl;
    cout<<"The value of a != b is "<<(a!=b)<<endl;
    cout<<"The value of a >= b is "<<(a>=b)<<endl;
    cout<<"The value of a <= b is "<<(a<=b)<<endl;
    cout<<"The value of a > b is "<<(a>b)<<endl;
    cout<<"The value of a < b is "<<(a<b)<<endl; 
    cout<<endl;

    // Logical operators 
    cout<<"Following are the logical operators in C++"<<endl;
    cout<<"The value oF this logical AND operator is ((a==b) && (a<b)) "<<((a==b) && (a<b))<<endl;
    cout<<"The value oF this logical OR operator is ((a==b) || (a<b)) "<<((a==b) || (a<b))<<endl;
    cout<<"The value oF this logical NOT operator is (!(a==b)) "<<(!(a==b))<<endl;
    return 0;
         
}
