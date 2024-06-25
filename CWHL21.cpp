#include <iostream>
using namespace std;

class Employee{
    private:
        int a,b,c;
    public:
        int d,e;
        void setData (int a1, int b1, int c1);
        void getData(){
            cout<<"The value of a is "<<a<<endl;
            cout<<"The value of b is "<<b<<endl;
            cout<<"The value of c is "<<c<<endl;
            cout<<"The value of d is "<<d<<endl;
            cout<<"The value of e is "<<e<<endl;
        }
};

class goMata{
    private:
        int dudh,bhojan,pooja;
    public:
        int prem,dular;
        void setData (int a1, int b1, int c1);
        void getData(){
            cout<<"The value of dudh is "<<dudh<<endl;
            cout<<"The value of bhojan is "<<bhojan<<endl;
            cout<<"The value of pooja is "<<pooja<<endl;
            cout<<"The value of prem is "<<prem<<endl;
            cout<<"The value of dular is "<<dular<<endl;
        }
};

void goMata :: setData (int a1, int b1, int c1){
    dudh = a1;
    bhojan = b1;
    pooja = c1;
}

int main(){
    goMata sundri;
    sundri.prem=1;
    sundri.dular=1;
    sundri.setData(10,3,3);   
    sundri.getData();      
    return 0;
}