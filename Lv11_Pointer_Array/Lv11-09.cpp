#include <iostream>

using namespace std;

int main()
{
	char arr[8];
	char big[8] = {};
	char small[8] = {};
	int bigIdx = 0, smallIdx = 0;

	for (int i = 0; i < 8; ++i)
		cin >> arr[i];

	for (int i = 0; i < 8; ++i)
	{
		if (arr[i] >= 'A' && arr[i] <= 'Z')
		{
			big[bigIdx] = arr[i];
			bigIdx++;
		}

		if (arr[i] >= 'a' && arr[i] <= 'z')
		{
			small[smallIdx] = arr[i];
			smallIdx++;
		}
	}


	cout << "big = ";

	for (int i = 0; i < 8; ++i)
	{
		if (!big[i])
			break;

		cout << big[i];
	}

	cout << endl;
	cout << "small = ";

	for (int i = 0; i < 8; ++i)
	{
		if (!small[i])
			break;

		cout << small[i];
	}

	return 0;
}