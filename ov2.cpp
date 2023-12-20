#include<iostream>
using namespace std;

class complex{
    
           int real;
           int img;
           
    public:
              void read(){
                  
                  cout<<"enter the value of real part:";
                  cin>>real;
                  cout<<"enter the value of _Imaginary part:";
                  cin>>img;
              }
    
             void display();
             complex operator+(int);
             complex operator+(complex);
              };

           void complex::display(){
               cout<<real<<"+ i"<<img<<endl;
           }
           
           complex complex::operator+(int t2){
               complex temp;
               temp.real = real + t2;
               temp.img = img;
               return temp;
           }
           
           complex complex::operator+(complex s2){
               complex temp;
               temp.real = real + s2.real;
               temp.img = img + s2.img;
               return temp;
           }
           
           int main(){
               
               complex c1,c2,c3,c4;
               c1.read();
               c1.display();
               c2.read();
               c2.display();
               c3 = c1+c2; //c1.operator+(c2);
               c4 = c1+5; //c1.operator+(5);
               cout<<"after addition"<<endl;
               c3.display();
               c4.display();
               return 0;
               
               
           }