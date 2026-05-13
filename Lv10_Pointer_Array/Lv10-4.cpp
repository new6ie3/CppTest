#include <iostream>

using namespace std;

void PrintData(int value);

void Even(int value)
{
	PrintData(value * 2);
}

void Odd(int value)
{
	PrintData(value - 10);
}

void PrintData(int value)
{
	cout << value << endl;
}

int main()
{
	int a, b;
	cin >> a >> b;

	int result = a / b;

	if (result & 1)
		Odd(result);
	else
		Even(result);

	PrintData(a + b);

	return 0;
}