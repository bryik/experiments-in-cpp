#include <iostream>
using namespace std;

// If I have a class hierarchy, what is a clean way to provide
// class-specific << overrides?

// Parent class.
struct A {
  int n = 2;
  virtual ostream& writeToOutput(ostream& os) const {
    os << "A.n is: " << n;
    return os;
  }
};

// Subclass of A.
struct B : public A {
  virtual ostream& writeToOutput(ostream& os) const {
    os << "B.n is: " << n;
    return os;
  }
};

ostream& operator<<(ostream& os, const A& a) { return a.writeToOutput(os); }

int main() {
  bool choice;
  cout << "Enter '1' to make an A object. Enter '0' to make a B object."
       << endl;
  cin >> choice;

  A* something;
  if (choice) {
    something = new A();
  } else {
    something = new B();
  }

  cout << *something << endl;
}