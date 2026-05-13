#include <iostream>

using namespace std;

int main()
{
	int arr[3][3];
	int input;

	cin >> input;

	if (input % 5 == 1)
	{
		int start = 9;
		for (int i = 0; i < 3; ++i)
		{
			int num = start;

			for (int j = 0; j < 3; ++j)
			{
				arr[i][j] = num;
				num -= 3;
			}
			start--;
		}
	}
	else if (input % 5 == 2)
	{
		int start = 7;

		for (int i = 0; i < 3; ++i)
		{
			int num = start;

			for (int j = 0; j < 3; ++j)
			{
				arr[i][j] = num;
				num++;
			}
			start -= 3;
		}
	}
	else
	{
		int start = 10;

		for (int i = 0; i < 3; ++i)
		{
			int num = start;

			for (int j = 0; j < 3; ++j)
			{
				arr[i][j] = num;
				num += 3;
			}
			start++;
		}
	}


	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}