#include<iostream>
using namespace std;

class swaps{
      
      int temp;
      int a;
      int b; 

     public :
       
       void read(){

           cout<<"enter the value for a"<<endl;
           cin>>a;
           cout<<"enter the value for b"<<endl;
           cin>>b;
       }

       void swapping(){
                temp=a;
                a=b;
                b=temp;
       }

       void display(){
               
               cout<<"after swapping";
               cout<<"a :"<<a<<endl;
               cout<<"b :"<<b<<endl;
       }
};

int main(){
       swaps s;
       s.read();
       s.swapping();
       s.display();
        return 0;
}