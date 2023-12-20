// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class Distance{
    int centimeter , meter;
    
    public: 
         Distance(int x, int y){
             centimeter = x;
             meter = y;
             
         }
         Distance sum(Distance &d){
            Distance temp;
            temp.meter = meter + d.meter;
            temp.centimeter = centimeter + d.centimeter;
            return temp;
         }
         
         void display(){
             cout<<meter<<"m"<<""<<centimeter<<"cm"<<endl;
         }
};
           int main(){
               
               Distance d1(10,20);
               Distance d2(20, 30);
               Distance d3;
               d1.display();
               d2.display();
               cout<<"after addition"<<endl;
               d3 = d1.sum(d2);
               d3.display();
           }


















