#include <iostream>

using namespace std;

int a;
int b;

void Input()
{
	cin >> a >> b;
}

void Output()
{
	int num = 5;

	while (num <= a + b)		
	{
		cout << num << " ";
		num++;
	}
}

int main()
{
	Input();
	Output();

	return 0;
}
