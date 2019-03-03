#include <iostream>
using namespace std;

// Parent error class.
struct Error {
  int num;
};

// Error subclass.
struct CodeError : public Error {
  int code;
};

// An object that throws a CodeError when its constructor is passed a '1'.
struct A {
  A(int n) {
    if (n == 1) {
      CodeError erd;
      erd.num = 999;
      erd.code = 12;
      throw erd;
    }
  }
};

int main() {
  try {
    A a(1);
    cout << "Created a(1) successfully." << endl;  // Never executed.
  } catch (Error e) {
    // Catches the error.
    cout << "Caught by 'Error' handler." << endl;
  } catch (CodeError e) {
    // Will not run.
    cout << "Caught by 'CodeError' handler." << endl;
  } catch (...) {
    // Will not run.
    cout << "Caught by '...' handler." << endl;
  }

  //>>> Caught by 'Error' handler.
}