   // OOPS - Classes and object

    // C++ --> inintially called --> C with classes by stroustroup
    // Class --> extension of structures (in C)
    // structures had limitaions
    //     - members are public
    //     - no methods
    // classes --> structures + more
    // classes --> can have methods and properties
    // cleasses --> can make few members as private & few as public
    // structures in C++ are typedefed
    // you can declare objects along with the class declaration like this:
    /*  class Employee{
            // Class definition
        } harry, rohan, lovish; */
    // harry.salary = it makes no sense if salary is private


#include <iostream>
#include<string>
using namespace std;

class binary
{
private:
    string s;
    void chk_bin(void);


public:
    void read(void);
    void ones(void);
    void display(void);
};

void binary ::read(void)
{
    cout << "Enter a binary number " << endl;
    cin >> s;
}

void binary ::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        /* code */
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary format " << endl;
            exit(0);
        }
    }
}

void binary :: ones(void)
{
    chk_bin();
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
       else
        {
            s.at(i) = '0';
        }
    }
}

void binary :: display(void)
{
    cout<<"Displaying your binary number"<<endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout<<endl;
}

int main()
{
    binary b;
    b.read();
    // b.chk_bin();
    b.display();
    b.ones();
    b.display();
    return 0;
}
