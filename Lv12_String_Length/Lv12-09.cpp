#include <iostream>

using namespace std;

int main()
{
	int arr[3][3] = {};
	char input;

	cin >> input;

	if (input >= '0' && input <= '9')
	{
		int num = 6;
		for (int i = 0; i < 3; ++i)
		{
			for (int j = i; j < 3; ++j)
			{
				arr[i][j] = num;
				num--;
			}
		}
	}
	else if (input >= 'A' && input <= 'Z')
	{
		int num = 6;
		for (int i = 0; i < 3; ++i)
		{
			for (int j = i; j > -1; --j)
			{
				arr[i][j] = num;
				num--;
			}
		}
	}

	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			if (arr[i][j] == 0)
				cout << ' ';
			else
				cout << arr[i][j];
		}
		cout << endl;
	}

	return 0;
}