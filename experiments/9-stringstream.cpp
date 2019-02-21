
// String streams let you concatenate numbers with strings.

#include <iostream>
#include <sstream>
using namespace std;

int main() {
  // Some stuff to make a string out of.
  string msg = "Hello";
  int number = 42;
  double biggerNumber = 42.99;

  stringstream ss;

  ss << msg << " ";
  ss << number << " and " << biggerNumber;

  // Print out the string stream.
  cout << ss.str() << endl;

  return 0;
}
