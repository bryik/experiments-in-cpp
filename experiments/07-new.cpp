
// Example of new and delete

#include <iostream>
using namespace std;

int main() {
  // 'new' allocates memory from the free store for objects on the heap from
  // and returns a pointer to this memory location (if memory can be allocated).
  int* numPointer = new int;
  *numPointer = 3;

  cout << *numPointer << endl;

  // 'delete' de-allocates a block of memory pointed to by a pointer
  // and returns it to the free store
  delete numPointer;

  cout << *numPointer << endl;

  // What happens if you try to delete something not allocated with new?
  // Probably a crash!

  // int i = 3;
  // int* iPointer = &i;
  // delete iPointer;

  // Arrays have a special keyword for deletion.
  int* numbers = new int[3]{1, 2, 3};
  delete[] numbers;

  return 0;
}
