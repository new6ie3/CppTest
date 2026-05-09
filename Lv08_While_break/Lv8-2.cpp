#include <iostream>

using namespace std;

int main()
{
	int arr[6] = {};

	cin >> arr[0];
	cin >> arr[1];
	cin >> arr[2];
	cin >> arr[3];
	cin >> arr[4];
	cin >> arr[5];

	for (int i = 0; i < 6; ++i)
	{
		if (arr[i] == 7) 
			break;

		cout << arr[i] << " ";
	}

	return 0;
}