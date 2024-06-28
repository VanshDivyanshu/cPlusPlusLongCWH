#include <iostream>
using namespace std;

class complex{
    int a,b;

    public:
        // Creating a Constructor 
        // Constructor is a special member function with the same name as of the class 
        // It is automatically invoked whenever an object is created

        complex(void);
        
        void printNumber(){
            cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
        }
};

complex :: complex(void){
    a = 10;
    b = 20;
    cout<<"Hello world"<<endl;
}

int main(){
    complex c1,c2,c3;
    c1.printNumber();
    c2.printNumber();
    c3.printNumber();
    return 0;
}