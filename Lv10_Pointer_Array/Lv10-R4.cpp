#include <iostream>

using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;

	int arr[3][4];

	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 4; ++j)
		{
			switch (i)
			{
			case 0:
				arr[i][j] = a;
				a++;
				break;

			case 1:
				arr[i][j] = b;
				b++;
				break;

			case 2:
				arr[i][j] = c;
				c++;
				break;
			}

			cout << arr[i][j] << ' ';
		}
		cout << endl;
	}

	return 0;
}