#include <iostream>

using namespace std;

int main()
{
	int arr[6][3];
	int start = 10;

	for (int i = 0; i < 6; ++i)
	{
		int num = start;

		for (int j = 0; j < 3; ++j)
		{
			arr[i][j] = num;
			num += 6;
		}
		start++;
	}

	int a = INT_MAX;
	int b = INT_MIN;

	while (a > b)
	{
		cin >> a >> b;
	}

	for (int i = 0; i < 6; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			if (i >= a && i <= b)
			{
				arr[i][j] = 7;
			}

			cout << arr[i][j] << ' ';
		}
		cout << endl;
	}

	return 0;
}