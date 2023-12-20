class Complex {
public:
  Complex(double real, double imag) : real_(real), imag_(imag) {}

  // Overloaded + operator using a friend function
  friend Complex operator+(const Complex& lhs, const Complex& rhs) {
    return Complex(lhs.real_ + rhs.real_, lhs.imag_ + rhs.imag_);
  }

private:
  double real_;
  double imag_;
};

// Example usage:
int main() {
  Complex c1(1.0, 2.0);
  Complex c2(3.0, 4.0);

  // Add the two complex numbers
  Complex c3 = c1 + c2;

  // Print the result
  std::cout << c3.real_ << " + " << c3.imag_ << "i" << std::endl;

  return 0;
}