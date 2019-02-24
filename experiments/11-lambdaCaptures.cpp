#include <iostream>
using namespace std;

int main() {
  int n = 0;

  // Error
  // auto incrementor1 = [=] { return n++; };

  // n will be mutated.
  auto incrementor2 = [&] { return n++; };
  cout << "incrementor2(): " << incrementor2() << endl;
  cout << "original n: " << n << "\n\n";

  //>>> incrementor2(): 0
  //>>> original n: 1

  // The original n will not be mutated, but a copy of it will be mutated.
  auto incrementor3 = [=]() mutable { return n++; };
  cout << "original n: " << n << endl;
  cout << "incrementor3(): " << incrementor3() << endl;
  cout << "original n: " << n << endl;
  cout << "incrementor3(): " << incrementor3() << endl;

  /*
  >>> original n: 1
  >>> incrementor3(): 1
  >>> original n: 1
  >>> incrementor3(): 2
  */
}