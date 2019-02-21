
// C-Style casts and Named casts.

#include <iostream>
using namespace std;

int main() {
  double d = 3.14;

  // C-style cast.
  int dAsInt = int(d);
  cout << dAsInt << endl;

  // Named cast.
  int dAsInt2 = static_cast<int>(d);
  cout << dAsInt2 << endl;

  // Can cast away const from pointers.
  int num = 42;
  const int* constantPointer = &num;
  // Doesn't work:
  // *constantPointer = 0;

  int* mutablePointer = const_cast<int*>(constantPointer);
  *mutablePointer = 0;

  cout << num << endl;

  return 0;
}
