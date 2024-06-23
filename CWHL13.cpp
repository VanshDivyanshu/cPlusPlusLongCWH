#include <iostream>
using namespace std;

int main(){
    int marks[4] = {23, 45, 56, 89};
    int mathMarks[4];
    mathMarks[0] = 2341;
    mathMarks[1] = 2141;
    mathMarks[2] = 3441;
    mathMarks[3] = 5641;
    cout<<"mathMarks:"<<endl;
    cout<<mathMarks[0]<<endl;
    cout<<mathMarks[1]<<endl;
    cout<<mathMarks[2]<<endl;
    cout<<mathMarks[3]<<endl<<endl;
    cout<<"marks:"<<endl;
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;

    // you can change the values of an array 
    marks[2] = 3;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;

    /*for (int i = 0; i < 4; i++)
    {
        cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
    }*/

    // int i=0;
    // while(i<4){
    //     cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl<<endl;
    //     i++;
    // }
    
    
    int i = 0;
    do{
        cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
        i++;
    }while(i<4);

    cout << endl;
    // pointers and arrays 
    int*p = marks;
    cout<<*p++<<endl;
    cout<<*++p;

    // cout<<"The value of *p is "<<*p<<endl;
    // cout<<"The value of *(p+1) is "<<*(p+1)<<endl;
    // cout<<"The value of *(p+2) is "<<*(p+2)<<endl;
    // cout<<"The value of *(p+3) is "<<*(p+3)<<endl;




    return 0;
}