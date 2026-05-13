#include <iostream>

using namespace std;

int Sum(int a, int b)
{
	return a + b;
}

int Comp(int a, int b)
{
	int result;

	a > b ? result = a - b : result = b - a;

	return result;
}

void Print(int t1, int t2)
{
	cout << "Че: " << t1 << endl;
	cout << "Тї: " << t2 << endl;
}

int main()
{
	int a, b;
	cin >> a >> b;

	int sum = Sum(a, b);
	int comp = Comp(a, b);

	Print(sum, comp);

	return 0;
}