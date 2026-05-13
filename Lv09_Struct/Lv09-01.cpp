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

	cout << "¼ýÀÚ" << input << "°³¼ö´Â" << count << "°³";

	return 0;
}
