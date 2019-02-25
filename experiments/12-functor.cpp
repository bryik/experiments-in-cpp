#include <iostream>
using namespace std;

// I'm not sure how well C++ handles closures, but it does have functors
// (functions with state).
struct Counter {
  int count = 0;
  int operator()() { return count++; }
};

int main() {
  Counter c;

  cout << c() << endl;  // 0
  cout << c() << endl;  // 1
  cout << c() << endl;  // 2
}