#include <iostream>
#include <vector>
#include <math.h>
#include <cstdlib>
using namespace std;

int main()
{
	int arr1;
	int a;
	bool found = false;
	cin >> arr1;
	vector<int> myVector(arr1);
	for (int i = 0; i < arr1; i++)
	{
		cin >> myVector[i];
	}
	a = arr1;
	for (int t = 0; t < arr1; t++)
	{
		a--;
		for (int i = 0; i < a; i++)
		{
			if (myVector[a] < myVector[i])
			{
				swap(myVector[a], myVector[i]);
			}
		}
	}

	for (int i = 0; i < arr1; i++)
	{
		cout << myVector[i];
		cout << " ";
	}
}
