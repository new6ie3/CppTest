#include <iostream>

using namespace std;

int main()
{
	int arr[4][4];
	int start = 13;

	for (int i = 0; i < 4; ++i)
	{
		int num = start;

		for (int j = 0; j < 4; ++j)
		{
			arr[i][j] = num;
			num -= 4;

			cout << arr[i][j] << " ";
		}
		cout << endl;
		start++;
	}

	return 0;
}