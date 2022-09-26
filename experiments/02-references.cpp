
#include <iostream>
using namespace std;

int main() {
  // Bind "i" to a particular region of memory with an integer type (an
  // 'object')
  int i = 2;
  cout << "i is: " << i << endl;

  // A reference is an alternative name for the same object.
  int& altI = i;
  cout << "altI is: " << altI << endl;

  // Mutating the reference mutates the object.
  altI = 3;
  cout << "i is now: " << i << endl;
}
