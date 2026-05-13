#include <iostream>

using namespace std;

int main()
{
	int arr[7];
	int min = INT_MAX;
	int max = INT_MIN;

	for (int i = 0; i < 7; ++i)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < 7; ++i)
	{
		if (min > arr[i])
			min = arr[i];

		if (max < arr[i])
			max = arr[i];
	}

	cout << "MAX = " << max << endl;
	cout << "MIN = " << min << endl;

	return 0;
}