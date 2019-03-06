#include <iostream>
#include <string>
using namespace std;

// Based on: https://stackoverflow.com/a/2309777/6591491

// An enumeration of colors.
enum class Color { red, green, blue };

/**
 * An overload of the extraction operator for Color enums.
 * If the input isn't recognized as a valid enum value, the
 * input stream is put into the failbit state.
 */
istream& operator>>(istream& is, Color& color) {
  string input;
  is >> input;
  if (input == "red") {
    color = Color::red;
  }

  else if (input == "green") {
    color = Color::green;
  }

  else if (input == "blue") {
    color = Color::blue;
  }

  else {
    // https://en.cppreference.com/w/cpp/io/basic_ios/setstate
    is.setstate(ios::failbit);
  }

  return is;
}

int main() {
  cout << "Enter a color (red, green, or blue): ";

  Color color;
  cin >> color;
  // If the extraction fails (user enters an invalid color), then
  // loop until they enter a valid color.
  while (cin.fail()) {
    cout << "Unknown color! Try again: ";
    cin.clear();
    cin >> color;
  }

  cout << "The enum value you chose was: " << int(color) << endl;

  /*
  Example:
  >>> Enter a color (red, green, or blue): redd
  >>> Unknown color! Try again: red
  >>> The enum value you chose was: 0
  */

  return 0;
}