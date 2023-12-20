#include <iostream>
using namespace std;

class Two_values {
private:
  int a, b;

public:
  void read() {
    cout << "enter the value of a: " << endl;
    cin >> a;
    cout << "enter the value of b: " << endl;
    cin >> b;
  }

  friend class min_max;
};

class min_max {
public:
  void calculate(Two_values &t) {
    if (t.a < t.b) {
      cout << t.b << " is max value" << endl;

       cout << t.a << " is min value" << endl;      

    } else {
      cout << t.a << " is max value" << endl;

       cout << t.b << " is min value" << endl;
    }
  }
};

int main() {
  Two_values t;
  t.read();
  min_max m;
  m.calculate(t);

  return 0;
}