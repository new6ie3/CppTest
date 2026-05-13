#include <iostream>

using namespace std;

int Input()
{
	int input;
	cin >> input;

	return input;
}

void CountDown(int value)
{
	for (int i = value; i > 0; --i)
	{
		cout << i << " ";
	}
}

int main()
{
	int input = Input();

	CountDown(input);

	return 0;
}