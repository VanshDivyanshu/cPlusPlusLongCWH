#include <iostream>
using namespace std;

// int sum(int a, int b){
//     int c = a + b;
//     return c;
// }


// Function prototype 
// int sum(int a, int b); ----> Not allowed
// int sum(int a, b); ----> Not allowed
int sum(int, int); //----> Not allowed
void g();

int main(){
    int n1, n2;
    cout<<"Enter the first number"<<endl;
    cin>>n1;
    cout<<"Enter the second number"<<endl;
    cin>>n2;
    // n1 and n2 are actual parameters
    cout<<"The sum is "<<sum(n1, n2)<<endl; 
    g();    
    return 0;
}


int sum(int a, int b){
    // a and b are the formal parameters which take value from actual parameters
    int c = a + b;
    return c;
}


void g(){
    cout<<"Hello, Good Morning"<<endl;
}

