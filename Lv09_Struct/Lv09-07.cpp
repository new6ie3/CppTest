#include <iostream>

using namespace std;

int main()
{
	int arr[6][2];
	int count = 0;

	for (int i = 0; i < 6; ++i)
	{
		for (int j = 0; j < 2; ++j)
		{
			cin >> arr[i][j];
		}
	}

	for (int i = 0; i < 6; ++i)
	{
		if (arr[i][0] < arr[i][1])
		{
			int temp = arr[i][0];
			arr[i][0] = arr[i][1];
			arr[i][1] = temp;

			count++;
		}

		cout << arr[i][0] << " " << arr[i][1] << endl;
	}
	cout << count << "Έν";

	return 0;
}