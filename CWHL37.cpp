#include <iostream>
using namespace std;

// Base class 
class Employee{
    public:
        int id;
        float salary;
            Employee(int inpId){
                id = inpId;
                salary = 34;
            }
            Employee(){}
};

// Derived class syntax 
/*
class {{derived-class-name} : {visibility-mode} {base-class-name}}{
    class members/methods/etc...
}

Note:
1. Default visibility mode is private 
2. Public visibility Mode: Public members of the base class becomes Public members of the derived class 
3. Private visibility Mode: Public members of the base class becomes Private members of the derived class 
4. Private members are never inherited

*/

// Creating a Programmer class derived from Employee Base class 

class Programmer : public Employee{
    public:
        Programmer(int inpId){
            id = inpId;
        }
        int languageCode = 9;
        void getData(){
            cout<<id<<endl;
        }
};

int main(){
    Employee harry(1),sumit(2);
    cout<<harry.salary<<endl;
    cout<<sumit.salary<<endl;
    Programmer skillF(10);
    cout<<skillF.languageCode<<endl;
    cout<<skillF.id<<endl;
    skillF.getData();
    return 0;
}