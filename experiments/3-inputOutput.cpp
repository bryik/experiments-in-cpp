
#include <iostream>
#include <string>
using namespace std;

int main() {
  // Read user input up to a space.
  string msg;
  // right-shift operator converts and assigns inpu from input stream
  cin >> msg;

  // Echo it back out with the left-shift operator.
  // "endl" inserts a new line.
  cout << msg << endl;

  return 0;
}
