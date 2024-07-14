#include <iostream>
using namespace std;

Syntax for templates 
template <class T>
class vector{
    T*arr;  // T can be int, float, char, etc..
    public:
        Vector(T*arr){
            //Code
        }
    //&many other methods
}

int main(){
    Vector <int> myVec(ptr);   
    Vector <float> myfVec(ptr);   
    return 0;
}
