#include <iostream>

using namespace std;

int main()
{
	int num = 1;
	int input;

	cin >> input;

	while (num <= input)
	{
		cout << num << " ";
		num++;
	}

	return 0;
}