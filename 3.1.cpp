#include <iostream>
#include <vector>
#include <math.h>
#include <cstdlib>


using namespace std;

void margeSort(vector<int>&my_vector, int l, int r)
{
	if (l == r)
	{
		return;
	}
	int m = (l + r) / 2;
	margeSort(my_vector, l, m);
	margeSort(my_vector, m + 1, r);
	int point1 = l;
	int point2 = m + 1;
	vector<int> res;
	for (int i = 0; i < r - l + 1; ++i)
	{
		if ((point1 <= m) && ((point2 > r) || (my_vector[point1] < my_vector[point2])))
		{
			res.push_back(my_vector[point1]);
			point1++;

		}
		else
		{
			res.push_back(my_vector[point2]);
			point2++;
		}

	}

	for (int i = 0; i < res.size(); i++)
	{
		my_vector[i + l] = res[i];
	}
}

int main()
{
	int arr1;
	cin >> arr1;
	vector<int> my_vector(arr1);
	for (int i = 0; i < arr1; i++)
	{
		cin >> my_vector[i];
	}
	margeSort(my_vector, 0, arr1 - 1);
	for (int i = 0; i < arr1; i++)
	{
		cout << my_vector[i];
		cout << " ";
	}
}

