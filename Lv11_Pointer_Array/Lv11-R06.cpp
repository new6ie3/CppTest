#include <iostream>

using namespace std;

void CompareGo(int arr1[5], int arr2[5])
{
	bool flag = true;

	for (int i = 0; i < 5; ++i)
	{
		if (arr1[i] != arr2[i])
		{
			flag = false;
			break;
		}
	}

	if (flag)
		cout << "두배열은완전같음";
	else
		cout << "두배열은같지않음";

}

int main()
{
	int arr[5] = { 3, 5, 1, 2, 7 };
	int input[5];

	for (int i = 0; i < 5; ++i)
	{
		cin >> input[i];
	}

	CompareGo(arr, input);


	return 0;
}