#include <iostream>

using namespace std;

int main()
{
	int arr[3][4] = {};
	int input;

	cin >> input;

	int y = 2;

	for (int i = 0; i < 3; ++i)
	{
		for (int j = y; j < 4; ++j)
		{
			arr[i][j] = input;
			input++;
		}
		y--;
	}

	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 4; ++j)
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