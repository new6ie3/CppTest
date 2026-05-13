#include <iostream>

using namespace std;

int Input()
{
	int input;
	cin >> input;

	return input;
}

void Cals(int a, int b, int c)
{
	int result = a + b + c;
	cout << result;
}

int main()
{
	int a = Input();
	int b = Input();
	int c = Input();

	Cals(a, b, c);

	return 0;
}