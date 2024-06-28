#include <iostream>
using namespace std;

class simple{
    int data1, data2, data3;
    public:
        simple(int a, int b = 9, int c = 8){
            data1 = a;
            data2 = b;
            data3 = c;
        }
        void printData(){
            cout<<"The value of data1, data2 and data3 is "<<data1<<", "<<data2<<" and "<<data3<<endl;
        }
};

int main(){
    simple s(5,4);
    s.printData();
    return 0;
}