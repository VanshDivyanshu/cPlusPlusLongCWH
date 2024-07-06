#include <iostream>
using namespace std;

class Base{
    protected:
        int a;
    private:
        int b:
};

/*
For a protected member:
                 Public Der     Private Der    Protected Der
1. Private M.    Not inherited  Not inherited  Not inherited
2. Protected M.  Protected      Private        Protected
3. Public M.     Public         Private        Protected
*/

class Derived: protected Base{

};

int main(){
    Base b;
    Derived d;
    cout<<d.a;
    return 0;
}