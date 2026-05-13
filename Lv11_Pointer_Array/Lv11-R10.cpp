#include <iostream>

using namespace std;

int main()
{
	int arr[2][3];
	int attach[6];
	int idx = 0;

	for (int i = 1; i > -1; --i)
	{
		for (int j = 2; j > -1; --j)
		{
			cin >> arr[i][j];
		}
	}
	
	for (int i = 0; i < 2; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			attach[idx] = arr[i][j];
			idx++;
		}
	}

	int temp = attach[0];
	attach[0] = attach[5];
	attach[5] = temp;

	for (int i = 0; i < 6; ++i)
		cout << attach[i] << " ";

	return 0;
}