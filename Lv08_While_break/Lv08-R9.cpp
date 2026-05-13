#include <iostream>

using namespace std;

int main()
{
	char arr[3][6] = {};
	char a, b;
	int row = 0;
	int col = 0;

	cin >> a >> b;

	while (row < 3)
	{
		if(col < 4)
			arr[row][col] = a;
		else
			arr[row][col] = b;

		col++;

		if (col / 6)
		{
			col = 0;
			row++;
		}
	}

	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 6; ++j)
		{
			cout << arr[i][j];
		}
		cout << endl;
	}

	return 0;
}
