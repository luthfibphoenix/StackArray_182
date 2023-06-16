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

	int push(int element) {
		if (top = 4) { //step 1
			cout << "Number of data exceeds the list." << endl;
			return 0;
		}
	}
};