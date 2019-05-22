#include <iostream>
#include <vector>
#include <math.h>
#include <cstdlib>


using namespace std;

void quickSort(vector<int>&my_vector, int l, int r)
{
	if (l >= r)
	{
		return;
	}
	int i = l - 1;
	int j = r + 1;
	int luck = rand() % (r - l + 1) + l;
	int pivot = my_vector[luck];
	while (true)
	{
		do {
			i++;
		} while (my_vector[i] < pivot);
		do {
			j--;
		} while (my_vector[j] > pivot);
		if (i >= j)
		{
			break;
		}
		swap(my_vector[i], my_vector[j]);
	}

	quickSort(my_vector, l, j);
	quickSort(my_vector, j + 1, r);
}

int main()
{
	int arr;
	int a, b;
	bool found = true;
	cin >> arr;
	vector<int> my_vector(arr);
	for (int i = 0; i < arr; i++)
	{
		cin >> my_vector[i];
	}
	int l = 0;
	int r = arr - 1;
	int j = r;
	int luck = rand() % arr;
	int pivot = my_vector[luck];
	quickSort(my_vector, l, j);
	quickSort(my_vector, j + 1, r);
	for (int i = 0; i < arr; i++)
	{
		cout << my_vector[i];
		cout << " ";
	}
}
