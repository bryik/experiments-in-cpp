#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  // A simple lambda that prints "hello".
  auto hello = []() { cout << "Hello" << endl; };
  hello();

  // As an IIFE.
  ([]() { cout << "Hello there" << endl; })();
  // Parameter braces can be left out if no parameters are used.
  ([] { cout << "General Kenobi" << endl; })();

  // With parameters.
  auto echo = [](string msg) { cout << msg << endl; };
  echo("ECHO...ECho...Echo...ec");

  // Capturing variables (kind of like a closure?)
  string padding = "    ";
  auto paddedEcho = [&padding](string msg) { cout << padding << msg << endl; };
  paddedEcho("echO...ecHO...eCHo...o");

  // forEach loops!
  vector<int> numbers{1, 2, 3, 4, 5};
  for_each(numbers.begin(), numbers.end(), [](int n) { cout << n << endl; });

  /*
  >>> 1
  >>> 2
  >>> 3
  >>> 4
  >>> 5
  */

  return 0;
}