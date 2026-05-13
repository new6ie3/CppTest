#include <iostream>

using namespace std;

int main()
{
	int arr[4][4] =
	{
		{1, 3, 6, 2},
		{4, 2, 4, 5},
		{6, 3, 7, 3},
		{1, 5, 4, 6}
	};

	int select[16] = {};
	int idx = 0;

	int input;
	cin >> input;

	for (int i = 0; i < 4; ++i)
	{
		for (int j = 0; j < 4; ++j)
		{
			if (input < arr[i][j])
			{
				select[idx] = arr[i][j];
				idx++;
			}
		}
	}

	for (int i = 0; i < 16; ++i)
	{
		if (!select[i]) 
			break;

		cout << select[i];
	}

	return 0;
}