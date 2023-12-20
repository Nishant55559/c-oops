#include<iostream>
using namespace std;

       class space{

             int a,b;
             public:
               
               
                void sum(){
                    cout<<"enter the first value:";
                    cin>>a;
                    cout<<"enter the second value:";
                    cin>>b;
                           
                }
                void display();
                void operator-();
       };

       void space::display(){
                  cout<<"original result:"<<a+b<<endl;
       }
       void space::operator-(){
                a=-a;
                b=-b;              
       }

    int main(){

    space S;
    S.sum();
    S.display();
    cout<<"result with sign changed "<<endl;
    -S; //S.operator-()
    S.display();
    return 0;
}
