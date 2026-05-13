#include <iostream>

using namespace std;

int main()
{
	int arr[4][4] = {};
	int input;

	cin >> input;

	if (input & 1)
	{
		int j = 3;

		for (int i = 0; i < 4; ++i)
		{
			arr[i][j] = i + 1;
			j--;
		}
	}
	else
	{
		for (int i = 0; i < 4; ++i)
		{
			arr[i][i] = i + 1;
		}
	}


	for (int i = 0; i < 4; ++i)
	{
		for (int j = 0; j < 4; ++j)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}