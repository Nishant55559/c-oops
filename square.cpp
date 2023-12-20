#include<iostream>
using namespace std;

class square{
    float side, area;

    public:

   

    void calculateArea(float a){
        side =a;
        area = side *side;
          cout<<"Area is :"<<area;
    }


};

int main(){
    square s;
 
    s.calculateArea(5);
   
    return 0;
}