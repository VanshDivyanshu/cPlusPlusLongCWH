#include <iostream>
using namespace std;

typedef struct employee
{
    /* data */
    int ID;
    char favChar;
    float salary;
}dbz;

union money
{
    int rice;
    char car;
    float pounds;
};

int main(){
    enum khaana { nashta, dupeherKaKhana, RaatKaKhana};
    khaana k1 = RaatKaKhana;
    cout<<k1<<endl;
    cout<<(k1==0)<<endl;
    cout<<nashta<<endl;
    // union money x;
    // x.rice=45;
    // x.car='k';
    // cout<<x.car<<endl;
    // dbz harry;
    // harry.ID=26276;
    // harry.favChar='c';
    // harry.salary=120000000;
    // cout<<"The value is "<<harry.ID<<endl;
    // cout<<"The value is "<<harry.favChar<<endl;
    // cout<<"The value is "<<harry.salary<<endl;
    return 0;
}