#include <iostream>

using namespace std;

int YesOrNo()
{
	int input;
	cin >> input;

	int result = input % 3;

	switch (result)
	{
	case 0: return 7;
	case 1: return 35;
	case 2: return 50;
	}

}

int main()
{
	int result = YesOrNo();
	
	cout << result;

	return 0;
}