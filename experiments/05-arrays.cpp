
// Arrays are contiguous collections of elements of the same type.

#include <iostream>
using namespace std;

int main() {
  // Create an array of three integers.
  int nums[3];

  // The integers in that array are not initialized automatically.
  // They contain junk data.
  cout << "Second value of nums: " << nums[2] << endl;

  // A pointer to an array works very similar to an array itself.
  int* numPointer = nums;
  cout << "Also the second value of nums: " << numPointer[2] << endl;
  cout << endl;

  // Can iterate over an array with a for loop
  for (int el : nums) {
    cout << el << endl;
  }
  cout << endl;

  // To mutate the array in a for loop, you need to use references.
  for (int& el : nums) {
    el = 1;
  }

  // Every element is "1" now.
  for (int el : nums) {
    cout << el << endl;
  }
  cout << endl;

  // Another way of iterating over an array:
  for (int i = 0; i < 3; i++) {
    int el = nums[i];
    cout << el << endl;
  }
  cout << endl;

  // Yet another way:
  int* pointerToFirstEl = begin(nums);
  int* pointerToLastEl = end(nums);
  for (; pointerToFirstEl < pointerToLastEl; ++pointerToFirstEl) {
    int el = *pointerToFirstEl;
    cout << el << endl;
  }
  cout << endl;

  return 0;
}
