#include <iostream>

using namespace std;

int main()
{
	int arr[3][3] = {};
	int x, y, num;

	while (true)
	{
		cin >> x;
		cin >> y;
		cin >> num;

		if (x >= 0 && x < 3 && y >= 0 && y < 3)
		{
			arr[x][y] = num;
			break;
		}
	}

	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 3; ++j)
			cout << arr[i][j] << " ";

		cout << endl;
	}

	return 0;
}