#include <iostream>

using namespace std;

int main()
{
	char str[3][3];
	int count = 0;
	int x1, x2, y1, y2;
	int temp;

	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			str[i][j] = 'A' + count;
			count++;
		}
	}

	cin >> x1 >> y1;
	cin >> x2 >> y2;

	temp = str[x1][y1];
	str[x1][y1] = str[x2][y2];
	str[x2][y2] = temp;

	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			cout << str[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}