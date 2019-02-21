
// Vectors are dynamic arrays.
// Same O(1) access time (by index) as arrays.
// Not just an aggregation of objects (as with arrays), vectors are containers.

#include <iostream>
#include <vector>
using namespace std;

int main() {
  // Create a vector of size 10.
  vector<int> nums(10);
  // By default, elements are initialized to "0".
  cout << nums[2] << endl;

  // Can specify default value.
  vector<int> ones(10, 1);
  cout << ones[2] << endl;

  // Create a copy.
  vector<int> copyOfNums = nums;
  cout << copyOfNums[2] << endl;
  // Does changing the copy effect the original?
  copyOfNums[2] = 100;
  cout << "nums[2] after setting copyOfNums[2] = 100: " << nums[2] << endl;
  // Doesn't seem like it.
  cout << endl;

  // Iterating over a vector
  for (int el : ones) {
    cout << el << endl;
  }
  cout << endl;

  // Comparison
  if (nums == ones) {
    cout << "nums == ones" << endl;
  } else {
    cout << "nums != ones" << endl;
  }

  return 0;
}
