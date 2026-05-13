#include <iostream>

using namespace std;

int main()
{
	int arr[7] = { 3, 4, 1, 3, 2, 7, 3 };
	int input;
	bool flag = false;

	cin >> input;

	for (int i = 0; i < 7; ++i)
	{
		if (input == arr[i])
			flag = true;
	}

	if (flag) cout << "발견";
	else cout << "미발견";



	return 0;
}