#include<iostream>
using namespace std;

class minimum;
class number{
int a , b;
public:
    
    void setdata(){

        cout << "Enter the value for a" << endl;
        cin >> a;
        cout << "Enter the value for b" << endl;
        cin >> b;
    }

friend class minimum;
};

class minimum{
    public: 
    void min(number ob1){
        if (ob1.a>ob1.b){
            cout<<"a is greater";
        }
        else cout<<"b is greater";
    }
};

int main(){

    number n1;
    minimum m1;
    n1.setdata();
    m1.min(n1);
    return 0;
}