
// Bring in "cout".
// "#include" literally gets replaced with code in the <iostream> header file
// by the C++ preprocessor.

// The preprocessed file can be obtained by running "g++ -E hello.cpp -o hello.ii".
// It's over 18,000 lines long!
// https://www.toptal.com/c-plus-plus/c-plus-plus-understanding-compilation
#include <iostream>

// This dumps std functions into the global scope. So you can write 'cin' instead of 'std::cin'.
using namespace std;

int main() {

	cout << "Hello world!" << endl;
	return 0;

}
