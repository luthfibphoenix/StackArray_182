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

		top++;
		stack_array[top] = element; //step3
		cout << endl;
		cout << element << "ditambahkan(pushed)" << endl;

		return element;
	}

	void pop() {
		if (empty()) {//step 1
			cout << "\nStack is empty. can't pop" << endl; //1.a
			return ;//1.b
		}
	}
};