#include <iostream>

using namespace std;

void Magic(int arr[3][3])
{
	int value = 1;
	for (int i = 0; i < 3; ++i)
	{
		for (int j = i; j < 3; ++j)
		{
			arr[i][j] = value;
			value++;
		}
	}
}

void Output(int arr[3][3])
{
	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			if (arr[i][j])
				cout << arr[i][j];
			else
				cout << ' ';
		}
		cout << endl;
	}
}

int main()
{
	int arr[3][3] = {};

	Magic(arr);
	Output(arr);

	return 0;
}