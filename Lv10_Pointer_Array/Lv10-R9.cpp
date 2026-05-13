#include <iostream>

using namespace std;

void Run(int value)
{
	int arr[3][3];

	if (value < 10)
	{
		int num = 1;
		for (int i = 0; i < 3; ++i)
		{
			for (int j = 0; j < 3; ++j)
			{
				arr[i][j] = num;
				num++;

				cout << arr[i][j];
			}
			cout << endl;
		}
	}
	else
	{
		int start = 3;
		for (int i = 0; i < 3; ++i)
		{
			int num = start;
			for (int j = 0; j < 3; ++j)
			{
				arr[i][j] = num;
				num--;

				cout << arr[i][j];
			}
			start += 3;
			cout << endl;
		}
	}
}

int main()
{
	int input;
	cin >> input;

	Run(input);

	return 0;
}