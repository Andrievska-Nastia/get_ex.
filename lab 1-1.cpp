#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int a;
	int b;
	int count = 0;
	cin >> a;
	vector<int> my_vector(a);

	for (int i = 0; i < a; i++)
	{
		cin >> b;
		my_vector[i] = b;
	}
	cin >> b;

	for (int i = 0; i < a; i++)
	{
		if (b == my_vector[i])
			count++;

	}
	cout << count << endl;
 }
