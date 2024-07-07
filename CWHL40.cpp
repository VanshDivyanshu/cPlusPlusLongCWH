#include <iostream>
using namespace std;

class student{
    protected:
        int RollNumber;
    public:
        void setRollNumber(int);
        void getRollNumber(void);
};

void student :: setRollNumber(int r){
    RollNumber = r;
}

void student :: getRollNumber(){
    cout<<"The roll number is "<<RollNumber<<endl;
}

class exam: public student{
    protected:
        float maths;
        float physics;
    public:
        void setMarks(float, float);
        void getMarks(void);
};

void exam :: setMarks(float m1, float m2){
    maths = m1;
    physics = m2;
}

void exam :: getMarks(){
    cout<<"The marks obtained in maths are: "<<maths<<endl;
    cout<<"The marks obtained in physics are: "<<physics<<endl;
}

class result: public exam{
    float percentage;
    public:
        void display(){
            getRollNumber();
            getMarks();
            cout<<"Your result is "<<(maths+physics)/2<<"%"<<endl;
        }
};

int main(){
    result harry;
    harry.setRollNumber(420);
    harry.setMarks(99.9, 100.0);
    harry.display();
    return 0;
}