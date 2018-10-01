
// I still don't fully understand how enums work or why you'd use them.
// https://docs.microsoft.com/en-us/cpp/cpp/enumerations-cpp?view=vs-2017

#include <iostream>
using namespace std;


// Old-style, "unscoped" enumeration
enum color {
  // Each enumerator is assigned an int "label"
  red,    // == 0
  green,  // == 1
  blue    // == 2
};


int main() {
  
  color favouriteColor = blue;

  // Marginally cleaner if statements and switches.
  // I guess less error-prone than using a string?
  if (favouriteColor == blue) {
    cout << "nice" << endl;
  }

  // Prevents mistakes? Strings will not prevent invalid choices.
  //favouriteColor = crimson;

  return 0;
}
