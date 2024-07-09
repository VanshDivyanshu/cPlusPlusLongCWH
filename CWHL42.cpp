#include <iostream>
#include <cmath>
using namespace std;

class simple{
    protected:  
        int num1,num2;
        int sum,diff,mul;
        float div;
    public: 
        void set_sim(int a,int b){
            num1 = a;
            num2 = b;
        }
        void process_sim(void){
            sum = num1 + num2;
            diff = num1 - num2;
            mul = num1*num2;
            div = (float)num1/num2;
        }
        void display_sim(void){
            cout<<num1<<" + "<<num2<<" = "<<sum<<endl;
            cout<<num1<<" - "<<num2<<" = "<<diff<<endl;
            cout<<num1<<" * "<<num2<<" = "<<mul<<endl;
            cout<<num1<<" / "<<num2<<" = "<<div<<endl;
        }
};

class scientific{
    protected:  
        int num3,num4;
        float cbrt3,cbrt4,sqrt3,sqrt4,cub3,cub4,sqr3,sqr4;
    public: 
        void set_sci(int a,int b){
            num3 = a;
            num4 = b;
        }
        void process_sci(void){
            sqr3 = num3*num3;
            sqr4 = num4*num4;
            cub3 = num3*num3*num3;
            cub4 = num4*num4*num4;
            sqrt3 = sqrt(num3);
            sqrt4 = sqrt(num4);
            cbrt3 = cbrt(num3);
            cbrt4 = cbrt(num4);
        }
        void display_sci(void){
            cout<<"square of "<<num3<<" = "<<sqr3<<endl;
            cout<<"square of "<<num4<<" = "<<sqr4<<endl;
            cout<<"cube of "<<num3<<" = "<<cub3<<endl;
            cout<<"cube of "<<num4<<" = "<<cub4<<endl;
            cout<<"square root of "<<num3<<" = "<<sqrt3<<endl;
            cout<<"square root of "<<num4<<" = "<<sqrt4<<endl;
            cout<<"cube root of "<<num3<<" = "<<cbrt3<<endl;
            cout<<"cube root of "<<num4<<" = "<<cbrt4<<endl;
        }
};

class hybrid: public simple, public scientific{
    public:
        void set(int a, int b){
            set_sim(a,b);
            set_sci(a,b);
        }
        void process(void){
            process_sim();
            process_sci();
        }
        void display(void){
            display_sim();
            display_sci();
        }
};

int main(){
    int a,b;
    cout<<"Enter the first number"<<endl;
    cin>>a;
    cout<<"Enter the second number"<<endl;
    cin>>b;
    hybrid object;
    object.set(a,b);
    object.process();
    object.display();
    return 0;
}