#include <iostream>

using namespace std;

void Input(int arr[][3])
{
	for (int i = 0; i < 2; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			cin >> arr[i][j];
		}
	}
}

int Process(const int arr[][3])
{
	int result = 0;

	for (int i = 0; i < 2; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			result += arr[i][j];
		}
	}

	return result;
}

void Output(const int result)
{
	cout << result;
}

int main()
{
	int arr[2][3] = {};

	Input(arr);
	
	int sum = Process(arr);
	Output(sum);

	return 0;
}