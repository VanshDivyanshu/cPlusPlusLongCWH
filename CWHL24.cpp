#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count;

public:
    void setData(void)
    {
        cout << "Enter the id " << endl;
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "The id of this employee is " << id << " and this is employee number " << count << endl;
    }
    static void getCount(void){
        cout<<"The value of count is "<<count<<endl;
    }
};
// Count is the static data member of class Employee
int Employee :: count /*=1000*/; // Default value is set 0

int main()
{
    Employee harsh, hriday, manan;
    // harsh.id = 1;
    // harry.count = 1; //cannot do this as id and count are private
    harsh.setData();
    harsh.getData();
    Employee :: getCount();
    
    hriday.setData();
    hriday.getData();
    Employee :: getCount();

    manan.setData();
    manan.getData();
    Employee :: getCount();
    return 0;
}
