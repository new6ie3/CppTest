#include <iostream>

using namespace std;

int main()
{
	int arr[7] = { 4, 3, 6, 1, 3, 1, 5 };
	int input;
	int count = 0;

	cin >> input;

	for (int i = 0; i < 7; ++i)
	{
		if (input == arr[i])
			count++;
	}

	cout << "숫자" << input << "개수는" << count << "개";

	return 0;
}