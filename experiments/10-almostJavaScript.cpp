
/**
 * Using auto, lambdas, and the STL to write C++ code that looks almost like
 * JavaScript.
 */

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> numbers = {1, 2, 3};

  // Calls f(element) for all elements in arr.
  auto forEach = [](auto arr, auto f) { for_each(arr.begin(), arr.end(), f); };

  // Prints an element with a newline.
  auto print = [](auto el) { cout << el << endl; };

  forEach(numbers, print);
  // Output:
  //  1
  //  2
  //  3
}
