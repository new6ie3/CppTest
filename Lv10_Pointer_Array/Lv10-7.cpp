#include <iostream>

using namespace std;

int main()
{
	int arr[3][4];
	int num = 12;
	int input;

	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 4; ++j)
		{
			arr[i][j] = num;
			num--;
		}
	}

	cin >> input;

	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 4; ++j)
		{
			if (j == input)
				arr[i][j] = 0;

			cout << arr[i][j] << " ";
		}

		cout << endl;
	}


	return 0;
}