#include <iostream>

using namespace std;

int main()
{
	int arr[4][4] =
	{
		{3, 4, 1, 6},
		{3, 5, 3, 6},
		{},
		{5, 4, 6, 0}
	};

	for (int i = 0; i < 4; ++i)
	{
		cin >> arr[2][i];
	}

	int min = INT_MAX;
	int max = INT_MIN;
	int maxX, maxY, minX, minY;

	for (int i = 0; i < 4; ++i)
	{
		for (int j = 0; j < 4; ++j)
		{
			if (arr[i][j] > max)
			{
				max = arr[i][j];
				maxX = j;
				maxY = i;
			}

			if (arr[i][j] < min)
			{
				min = arr[i][j];
				minX = j;
				minY = i;
			}
		}
	}

	cout << "MAX=" << max << '(' << maxY << ',' << maxX << ')' << endl;
	cout << "MIN=" << min << '(' << minY << ',' << minX << ')' << endl;

	return 0;
}