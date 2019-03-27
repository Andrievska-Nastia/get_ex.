#include <iostream>
#include <vector>

using namespace std;

int main()
{
	bool count = false;
	int arr1, arr2, arr3;
	cin >> arr1;
	cin >> arr2;
	if (arr1 < arr2)
	{
		arr3 = arr1;
		arr1 = arr2;
		arr2 = arr3;
	}
	vector<int> my_vector1(arr1);
	vector<int> my_vector2(arr2);

	for (int i = 0; i < arr1; i++)
	{
		cin >> my_vector1[i];
	}

	for (int i = 0; i < arr2; i++)
	{
		cin >> my_vector2[i];
	}

	for (int i = 0; i < arr2; i++)
	{

		count = false;
		int a = 0, b = arr1 - 1;
		int bestIndex = arr1 - 1;
		while (a <= b)
		{
			int c = (a + b) / 2;
			if (my_vector1[c] == my_vector2[i])
			{

				cout << "YES" << endl;
				count = true;
				break;

			}
			else if (my_vector1[c] > my_vector2[i])
			{
				b = c - 1;
			}
			else
			{
				a = c + 1;
			}
		}
		if (count == false)
			cout << "NO" << endl; 
	}
}
