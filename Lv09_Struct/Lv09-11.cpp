#include <iostream>

using namespace std;

struct Person
{
	int age;
	int height;
};

int Input()
{
	int input;
	cin >> input;

	return  input;
}

void Output(int age1, int age2, int height1, int height2)
{
	int aAvr = (age1 + age2) * 0.5f;
	int hAvr = (height1 + height2) * 0.5f;
	
	cout << aAvr << " " << hAvr;
}

int main()
{
	Person a;
	Person b;

	a.age = Input();
	a.height = Input();
	b.age = Input();
	b.height = Input();

	Output(a.age, b.age, a.height, b.height);

	return 0;
}