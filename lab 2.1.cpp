#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int arr;
	bool found = false;
	cin >> arr;
	vector<int> my_vector(arr);
	int a = 0;
	for (int i = 0; i < arr; i++)
	{
		cin >> my_vector[i];
	}
	while (found == false)
	{
		found = true;
		for (int i = 1; i < arr; i++)
		{
			if (my_vector[i - 1] > my_vector[i])
			{
				found = false;
				a = my_vector[i - 1];
				my_vector[i - 1] = my_vector[i];
				my_vector[i] = a;
			}
		}
	}
	for (int i = 0; i < arr; i++)
	{
		cout << my_vector[i];
		cout << " ";
	}
}
