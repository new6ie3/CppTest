#include <iostream>

using namespace std;

void CheckChar(char word)
{
	if (word >= 'A' && word <= 'Z')
		cout << "´ë";
	else if (word >= 'a' && word <= 'z')
		cout << "¼Ò";
}

int main()
{
	char str[5];
	
	for (int i = 0; i < 5; ++i)
		cin >> str[i];

	for (int i = 0; i < 5; ++i)
		CheckChar(str[i]);


	return 0;
}