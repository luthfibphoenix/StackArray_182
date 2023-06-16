#include <iostream>
#include <string>

using namespace std;

class StackArray {
private:
	int stack_array[5];
	int top;

public:
	//cosntructor
	StackArray() {
		top = -1;
	}
};