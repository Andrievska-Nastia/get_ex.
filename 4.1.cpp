#include <iostream>
#include <vector>
#include <stdio.h>
#include <string>

using namespace std;

int main()
{
	vector<int> dataStack;
	bool found = true;

	int size = -1;
	while (found == true) {
		string operation;
		cin >> operation;
		if (operation == "push") {
			int value;
			cin >> value;
			dataStack.push_back(value);
			size++;
			cout << "ok" << endl;
		}
		if (operation == "pop") {
			cout << dataStack[size] << endl;
			dataStack.pop_back();
			size--;
		}
		if (operation == "back") {
			cout << dataStack[size] << endl;

		}
		if (operation == "size") {
			cout << size + 1 << endl;
		}
		if (operation == "clear") {
			while (size >= 0)
			{
				dataStack.pop_back();
				size--;
			}
			size = -1;
			cout << "ok" << endl;
		}
		if (operation == "exit") {
			found = false;
			cout << "bye" << endl;
		}
	}
}
