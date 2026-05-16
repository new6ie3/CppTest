#include <iostream>

using namespace std;

void InputArray(int* arr)
{
	for (int i = 0; i < 5; ++i)
	{
		cin >> arr[i];
	}
}

int main()
{
	int arrA[5];
	int arrB[5];
	int arrC[5];
	int result[5];

	InputArray(arrA);
	InputArray(arrB);
	InputArray(arrC);

	for (int i = 0; i < 5; ++i)
	{
		result[i] = arrA[i] * arrB[i] + arrC[i];
		cout << result[i] << ' ';
	}

	return 0;
}