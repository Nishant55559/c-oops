#include<iostream>
using namespace std;


class X
{
private:
    static int a;
    int b;
public:
    void initilize(int x,int y)
    {   a=x;b=y; }
void display() {
    cout<<"Static a= "<<a<<endl;
    cout<<"Non-Static b= "<<b<<endl;
}
};

int X::a;

int main()
{
    X ob1,ob2,ob3;
    ob1.initilize(10,20);
    ob1.display();
    ob2.initilize(30,40);
    ob2.display();
    ob3.initilize(50,60);
    ob3.display();
    ob1.display();
    ob2.display();
    ob3.display();
}
