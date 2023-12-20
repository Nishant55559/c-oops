#include<iostream>
using namespace std;

class complex{

    int a,b;
    
    public: void read(int,int);
    void display();
    void add(complex,complex);

};

   void complex :: read(int x, int y){

     a=x;
     b=y;
}

void complex ::display(){

cout<<a<<"+"<<"i"<<b<<endl;

}

void complex ::add(complex c1 , complex c2){

   a= c1.a + c2.a;
   b= c2.b + c2.b;
}

int main(){

complex c1,c2,c3;
 
 c1.read(5,4);
 c2.read(4,3);
 c3.add(c1,c2);
 c1.display();
 c2.display();
 c3.display();
 
 
 return 0;

}





