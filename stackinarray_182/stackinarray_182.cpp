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

		cout << "\nThe popped element is: " << stack_array[top] << endl;  //step2
		top--;//step3 decrement
	}

	//method for check if data is empty
	bool empty() {
		return (top == -1);
	}

	void display() {
		if (empty()) {
			cout << "\nStack is empty." << endl;
		}
		else {
			for (int tmp = 0; tmp <= top; tmp++) {
				cout << stack_array[top] << endl;
			}
		}
	}
};

int main() {
	StackArray s;
	char ch;
	while (true) {
		cout << endl;
		cout << "\n***Stack Menu***\n";
		cout << "1. Push\n";
		cout << "2. Pop\n";
		cout << "3. Display\n";
		cout << "4. Exit\n";
		cout << "Choose Your Character: ";
		cin >> ch;
		switch (ch) {
		case '1': {
			cout << "\nEnter an Element: ";
			int element;
			cin >> element;
			s.push(element);
			break;
		}
		case '2':
			if (s.empty()) {
				cout << "\nStack is Empty." << endl;
			}
			s.pop();
			break;
		case '3':
			s.display();
			break;
		}
	}
}