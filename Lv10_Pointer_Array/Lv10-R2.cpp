#include <iostream>

using namespace std;

int main()
{
	int arr[5][5];
	int start = 21;
	
	for (int i = 0; i < 5; ++i)
	{
		int num = start;

		for (int j = 0; j < 5; ++j)
		{
			arr[i][j] = num;
			num -= 5;
		}
		start++;
	}

	int input;
	cin >> input;

	for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j < 5; ++j)
		{
			if (input == i)
				arr[i][j] = input;

			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}