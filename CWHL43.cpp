#include <iostream>
using namespace std;

class base1{
    public:
        void greet(){
            cout<<"How are you ??"<<endl;
        }
};

class base2{
    public:
        void greet(){
            cout<<"Kya haal hai ??"<<endl;
        }
};

class hybrid: public base1, public base2{
    int a;
    public:
        void greet(){
            base1::greet();
        }
};

class b{
    public:
        void say(){
            cout<<"Hello world"<<endl;
        }
};

class d: public b{
    int a;
    // d's new say() method will override base class's say() method 
    public:
        void say(){
            cout<<"Hello my beautiful people"<<endl;
        }
};

int main(){
    // Ambiguity 1
    // base1 base1obj;
    // base2 base2obj;
    // base1obj.greet();
    // base2obj.greet();
    // hybrid d;
    // d.greet();

    b x;
    d y;
    x.say();
    y.say();
    return 0;
}