#include <iostream>
using namespace std;

class A {
 public:
  int n = 2;
  void f() { cout << "A.f()" << endl; }
};

// In order for B to have access to A.n, the following line would need to be
// "class B : public A"
class B : A {
 public:
  void g() {
    f();
    cout << "b.g()" << endl;
  }
};

int main() {
  B b;

  // Won't work as n and f() are inaccessible to from B.
  // cout << b.n << endl;
  // b.f();

  b.g();
}