#include <iostream>

using namespace std;

int main()
{
	int arr[6] = { 10, 50, 40, 20, 30, 40 };
	int input[6];

	for (int i = 0; i < 6; ++i)
		cin >> input[i];

	for (int i = 0; i < 6; ++i)
	{
		int count = 0;
		cout << input[i] << '=';

		for (int j = 0; j < 6; ++j)
		{
			if (input[i] < arr[j])
				count++;
		}
		cout << count << "°³" << endl;
	}

	return 0;
}