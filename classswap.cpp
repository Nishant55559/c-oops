#include<iostream>
using namespace std;

class numberswapper{
      
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

       

       void display(){
               
               cout<<"after swapping"<<endl;
               cout<<"a :"<<a<<endl;
               cout<<"b :"<<b<<endl;
       }
};

int main(){
       numberswapper s;
       s.read();
       
       s.display();
        return 0;
}