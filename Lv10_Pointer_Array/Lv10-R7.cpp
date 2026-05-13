#include <iostream>

using namespace std;

int arr[7][5] = 
{
	{1, 0, 0, 0, 0},
	{1, 0, 1, 0, 0},
	{1, 1, 0 ,1, 0},
	{1, 0, 1, 0, 0},
	{0, 1, 0, 0, 1},
	{0, 0, 0, 1, 0},
	{1, 1, 0, 0, 0}
};

int Input()
{
	int input;
	cin >> input;

	return input;
}

int Process(int value)
{
	int count = 0;

	for (int i = 0; i < 7; ++i)
	{
		for (int j = 0; j < 5; ++j)
		{
			if (value == j && arr[i][j] == 1)
				count++;
		}
	}

	return count;
}

void Output(int value)
{
	cout << value;
}

int main()
{
	int num = Input();
	int result = Process(num);
	Output(result);

	return 0;
}