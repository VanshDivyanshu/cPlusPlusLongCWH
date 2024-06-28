#include <iostream>
#include <cmath>
using namespace std;

class point{
    int x,y;
    friend void distance(point, point);
    public:
        point(int a, int b){
            x = a;
            y = b;
        }

        void displaypoint(){
            cout<<"The point is ("<<x<<", "<<y<<")"<<endl;
        }
};

void distance(point p1, point p2)
{
    int xDiff = (p2.x-p1.x);
    int yDiff = (p2.y-p1.y);
    int dist = sqrt(pow(xDiff,2) + pow(yDiff,2));
    cout<<"The distance is "<<dist<<endl;
}

int main(){
    point p(1, 1);
    point q(4, 6);
    distance(p,q);
    p.displaypoint();

    point a(1,1);
    point b(1,1);
    distance(a,b);

    point c(0,1);
    point d(0,6);
    distance(c,d);
    
    point e(1,0);
    point f(70,0);
    distance(e,f);

    return 0;
}