#include <iostream>
using namespace std;

/**
 * Template functions allow you to write functions that work with many
 * different types.
 *
 * Example from: http://www.cplusplus.com/doc/oldtutorial/templates/
 */
template <class T>
T getMax(T a, T b) {
  return (a > b) ? a : b;
}

int main() {
  // Using getMax() with integers.
  int larger = getMax<int>(2, 4);
  cout << larger << endl;
  // >>> 4

  // Using getMax() with doubles.
  double largerD = getMax<double>(2.718, 3.142);
  cout << largerD << endl;
  // >>> 3.142

  return 0;
}