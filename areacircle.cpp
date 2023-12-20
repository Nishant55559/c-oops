#include<iostream>
using namespace std;
 
 class circle{
    public:
    float radius;
    const float pi =3.14;
    float area;

    void read(){
        cout<<" enter radius :";
        cin>>radius;
    }

    void calculateArea(){
        area = pi*radius*radius;
    }

    void display(){
        cout<<"Area is : "<<area;
    }

 };

 int main(){

    circle c;
    c.read();
    c.calculateArea();
    c.display();

    return 0;
 }