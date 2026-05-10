#include <iostream>

using namespace std;

int main()
{
	int arr[6][3] = {};
	int a, b;
	
	cin >> a >> b;

	for (int i = 0; i < 6; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			if(i / 3)
				arr[i][j] = b;
			else 
				arr[i][j] = a;
		}
	}


	for (int i = 0; i < 6; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			cout << arr[i][j];
		}
		cout << endl;
	}

	return 0;
}
