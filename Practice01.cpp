// #include<iostream>
// using namespace std;

// class complex{
//     int a;
//     int b;

//     public: 
//         void setData(int v1, int v2){
//             a = v1;
//             b = v2;
//         }

//         void setDataBySum(complex o1, complex o2){
//             a = o1.a + o2.a;
//             b = o1.b + o2.b;
//         }

//         void printNumber(){
//             cout<<"Your complex number is "<<a<<" + "<<b<<"i"<<endl;
//         }
// };

// int main(){
//     complex c1, c2, c3;
//     c1.setData(1, 2);
//     c1.printNumber();

//     c2.setData(3, 4);
//     c2.printNumber();

//     c3.setDataBySum(c1, c2);
//     c3.printNumber();
//     return 0;
// }



// Parameterized Constructor using Friend Function Example :-
#include <iostream>
#include <cmath>
using namespace std;

class point{
    int x,y;
    friend void distance (point , point);
    public:
    point (int a,int b){
        x=a;
        y=b;
    }
    void displayPoint(){
        cout<<"The Point is : ("<<x<<","<<y<<")"<<endl;
    }
};
void distance(point p1,point p2){
    int x_diff = (p2.x-p1.x);
    int y_diff = (p2.y-p1.y);
    int diff = sqrt(pow(x_diff,2)+pow(y_diff,2));
    cout<< "The difference is : "<<diff<<endl;
}
int main(){
    point p(1,2);
    point q(4,6);

    point c(1,1);
    point d(1,1);

    point e(1,0);
    point f(70,0);

    distance(p,q);
    distance(c,d);
    distance(e,f);
    return 0;
}
