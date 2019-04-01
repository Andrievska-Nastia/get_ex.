#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int arr1, arr2;
	int a, b;
	a = 0;
	b = 0;
	int res1 = -1, res2;
	cin >> arr1;
	vector<int> my_vector1(arr1);
	cin >> arr2;
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
		res1 = -1;
		int c = 0, r = arr1 - 1;
		int bestIndex = arr1 - 1;


		while (c <= r)
		{
			int m = (c + r) / 2;
			if (my_vector1[m] == my_vector2[i])
			{

				res1 = m;
				r = m - 1;

			}
			else if (my_vector1[m] > my_vector2[i])
			{
				r = m - 1;
			}
			else
			{
				c = m + 1;
			}
		}
		c = 0, r = arr1 - 1;
		
		while (c <= r)
		{
			int m = (c + r) / 2;
			if (my_vector1[m] == my_vector2[i])
			{

				res2 = m;
				c = m + 1;

			}
			else if (my_vector1[m] > my_vector2[i])
			{
				r = m - 1;
			}
			else
			{
				c = m + 1;
			}
		}

		if (res1 != -1)
		{
			res1++;
			res2++;
			cout << res1;
			cout << " ";
			cout << res2;
			cout << endl;
		}
		else
		{
			cout << "0" << endl;
		}
	}
}
