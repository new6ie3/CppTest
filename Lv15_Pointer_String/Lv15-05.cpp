#include <iostream>

using namespace std;

int main()
{
	int input;
	
	while (true)
	{
		cin >> input;
		if (input >= 1000 && input <= 9999)
			break;
	}

	int a = input / 1000;
	int b = input % 1000 / 100;
	int c = input % 100 / 10;
	int d = input % 10;

	cout << "숫자" << a << endl;
	cout << "숫자" << b << endl;
	cout << "숫자" << c << endl;
	cout << "숫자" << d << endl;

	return 0;
}