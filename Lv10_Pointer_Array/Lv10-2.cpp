#include <iostream>

using namespace std;

char Getchar()
{
	char a;
	char b;

	cin >> a >> b;

	if (a > b) return a;
	else return b;
}

int main()
{
	char result = Getchar();
	
	cout << result;

	return 0;
}