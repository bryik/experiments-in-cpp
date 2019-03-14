// A demonstration of C++ structs.

#include <iostream>
using namespace std;

/**
 * A struct for counting.
 */
struct Counter {
  // CONSTRUCTORS
  // Tell the compiler to generate a default constructor.
  Counter() = default;
  // A constructor that initializes a counter with a given value.
  Counter(int _n) : n(_n){};

  // VARIABLES
  int n = 0;

  // OPERATORS
  // Prefix ++ (Increments, then returns.)
  Counter& operator++() {
    n++;
    return (*this);
  }

  // Postfix ++ (Returns, then increments)
  Counter operator++(int) {
    Counter& self = (*this);
    // Copy self (preserves state prior to incrementing)
    Counter cCopy = Counter(self);
    // Increment self
    ++self;
    // Return the copy
    return cCopy;
  }

  // Allows a Counter to add the count of another Counter to itself.
  // e.g. myCounter += otherCounter
  Counter& operator+=(const Counter& other) {
    n += other.n;
    return (*this);
  }

  // CONVERTORS
  // Converts a Counter into an integer.
  operator int() { return n; }
};

// Allows a Counter to be printed to std.out with '<<'
ostream& operator<<(ostream& os, const Counter& c) {
  os << c.n;
  return os;
}

// Allows a Counter to read from std.in.
istream& operator>>(istream& is, Counter& c) {
  cin >> c.n;
  if (!cin) {
    c = Counter();
  }
  return is;
}

int main() {
  Counter c;
  cout << "Constructed: " << c << endl;
  // >>> Constructed: 0

  ++c;
  cout << "++c: " << c << endl;
  // >>> ++c: 1

  c++;
  cout << "c++: " << c << endl;
  // >>> c++: 2

  int nC = int(c);
  cout << "int(c): " << nC << endl;
  // >>> int(c): 2

  cout << "Mutate c with: ";
  cin >> c;
  cout << "c after mutation: " << c << endl;
  /*
  Example:
  >>> Mutate c with: 5
  >>> c after mutation: 5
  */
}