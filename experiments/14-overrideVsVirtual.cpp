#include <iostream>
using namespace std;

struct A {
  // Removing the virtual keyword has different effects.
  // With "override", the compiler notices the error.
  // With "virtual", struct B still compiles and print() is not overridden
  virtual void print() { cout << "A.print()" << endl; }
};

struct B : public A {
  // print() overridden with "virtual"
  virtual void print() { cout << "B.print()" << endl; }
};

struct C : public A {
  // print() overridden with "override"
  void print() override { cout << "C.print()" << endl; }
};

int main() {
  A* b = new B();
  b->print();  // >>> B.print()

  A* c = new C();
  c->print();  // >>> C.print()
}