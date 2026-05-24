#include <iostream>

using namespace std;

bool Result(int* arr)
{
	for (int i = 0; i < 5; ++i)
	{
		int big = arr[i] > arr[i + 1] ? arr[i] : arr[i + 1];
		int small = arr[i] > arr[i + 1] ? arr[i + 1] : arr[i];

		if (big - small >= 3)
			return false;
	}

	return true;
}


int main()
{
	int arr[6];
	
	for (int i = 0; i < 6; ++i)
		cin >> arr[i];

	bool result = Result(arr);
	
	if (result)
		cout << "완벽한 배치";
	else
		cout << "재배치 필요";

	return 0;
}