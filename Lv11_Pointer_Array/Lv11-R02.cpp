#include <iostream>

using namespace std;

int arr[3][3] =
{
	{1, 1, 1},
	{1, 2, 1},
	{3, 6, 3}
};

int Count(int target)
{
	int count = 0;

	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			if (target == arr[i][j])
				count++;
		}
	}

	return count;
}

int main()
{
	int input;
	cin >> input;

	int result = Count(input);

	cout << result;

	return 0;
}