#include <iostream>

using namespace std;

void BBQ(int a, int b)
{
	int max, min;

	if (a > b)
	{
		max = a;
		min = b;
	}
	else
	{
		max = b;
		min = a;
	}

	cout << "ÇÕ: " << a + b << endl;
	cout << "Â÷: " << max - min << endl;
	cout << "°ö: " << a * b << endl;
	cout << "¸ò: " << max / min << endl;
}

int main()
{
	int a, b;
	cin >> a >> b;

	BBQ(a, b);

	return 0;
}