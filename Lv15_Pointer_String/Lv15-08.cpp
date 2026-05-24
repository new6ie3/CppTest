#include <iostream>

using namespace std;

int main()
{
	char str[4][7];
	for (int i = 0; i < 4; ++i)
		cin >> str[i];

	int arr[4] = {};
	for (int i = 0; i < 4; ++i)
	{
		for (int j = 0; j < 7; ++j)
		{
			if (str[i][j] == '\0')
			{
				arr[i] = j;
				break;
			}
		}
	}

	for (int i = 0; i < 4; ++i)
	{
		for (int j = i + 1; j < 4; ++j)
		{
			if (arr[i] > arr[j])
			{
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}

		cout << arr[i] << ' ';
	}


	return 0;
}