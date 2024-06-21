#include <iostream>
using namespace std;

int main()
{
    int age;
    cout<<"Tell me your age"<<endl;
    cin>>age;
    // if((age<18)&&(age>0)){
    //     cout<<"you can not come to my party"<<endl;
    // }
    // else if(age == 18){
    //     cout<<"You are a kid and you will get a kid pass to the party"<<endl;
    // }
    // else if(age<1){
    //     cout<<"you are not yet born"<<endl;
    // }
    // else{
    //     cout<<"you can come to the party"<<endl;
    // }

    switch (age)
    {
    case 18:
        cout<<"tu toh bhai nikla"<<endl;      
        break;
    case 16:
        cout<<"abey tu toh chhota bhai nikla"<<endl;
    case 20:
        cout<<"arey bade bhaiya kaise hai aap";
    
    default:
        cout<<"No special ages";
        break;
    }
    return 0;
}
