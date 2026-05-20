#include <iostream>

using namespace std;

int main()
{
	char a, b;
	cin >> a >> b;

	char* pa = &a;
	char* pb = &b;

	char temp = *pa;
	*pa = *pb;
	*pb = temp;

	cout << a << ' ' << b;

	return 0;
}