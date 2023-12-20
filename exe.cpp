
#include <iostream>
using namespace std;

class postfix{
    
    int count;
    
    public: 
            void read(){
                
                count = 5;
            }
    
          void display(){
              
              cout<<"count:"<<count;
          }
    
     friend void operator++(postfix& , int );
};

                 void operator++(postfix& p1 , int s){
                     
                     p1++;
                 }    
                 
                 int main(){
                     
                     postfix p2;
                     
                     p2.read();
                     p2++;
                     p2.display();
                     
                 }
                 
                 
                 