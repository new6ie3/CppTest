#include <iostream>

using namespace std;

int main()
{
	int arr[4][4];
	int start = 2;

	for (int i = 0; i < 4; ++i)
	{
		int num = start;

		for (int j = 0; j < 4; ++j)
		{
			arr[i][j] = num;
			num += 8;

			cout << arr[i][j] << " ";
		}
		start += 2;
		cout << endl;
	}

	return 0;
}