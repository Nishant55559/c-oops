#include<iostream>
using namespace std;

class number; // Forward declaration 

class minimum {
public:
    void min(int a, int b) {
        if (a < b) {
            cout << "a is minimum" << endl;
        }
        else if (b < a) {
            cout << "b is minimum" << endl;
        }
        else {
            cout << "Both a and b are equal" << endl;
        }
    }
};

class number {
private:
    int a, b;

public:
    void setdata() {
        cout << "Enter the value for a" << endl;
        cin >> a;
        cout << "Enter the value for b" << endl;
        cin >> b;
        cout << "The value of a is: " << a << endl;
        cout << "The value of b is: " << b << endl;
    }

    // Getter methods to access a and b from outside the class
    int getA() {
        return a;
    }

    int getB() {
        return b;
    }
};

int main() {
    number n1;
    minimum m1;

    n1.setdata(); 
    m1.min(n1.getA(), n1.getB()); // Pass a and b to the min method

    return 0;
}
