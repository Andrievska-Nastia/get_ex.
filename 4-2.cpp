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
			cout << dataStack[0] << endl;
			for (int i = 0; i < size; i++)
			{
				dataStack[i] = dataStack[i + 1];
			}
			dataStack.pop_back();
			size--;
		}
		if (operation == "front") {
			cout << dataStack[0] << endl;

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
