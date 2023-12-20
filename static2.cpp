#include<iostream>
using namespace std;

    class Counter {
public:
  // Static data member to count the number of objects created
  static int count;

  // Constructor
  Counter() {
    count++;
  }

  // Static member function to get the number of objects created
  static int get_count() {
    return count;
  }
};

// Initialize the static data member
int Counter::count = 0;

int main() {
  // Create three objects of the Counter class
  Counter obj1;
  Counter obj2;
  Counter obj3;

  // Print the number of objects created
  std::cout << "Number of objects created: " << Counter::get_count() << std::endl;

  return 0;
}