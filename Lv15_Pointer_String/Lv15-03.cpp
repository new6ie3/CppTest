#include <iostream>

using namespace std;

void Sort(char* str)
{
	int i = 0;
	while (str[i + 1] != '\0')
	{
		int j = i + 1;
		while (str[j] != '\0')
		{
			if (str[i] > str[j])
			{
				char temp = str[i];
				str[i] = str[j];
				str[j] = temp;
			}
			j++;
		}
		i++;
	}
}

void Gather(char* str, char* result)
{
	int i = 0;
	while (result[i] != '\0')
		i++;

	int j = 0;
	while (str[j] != '\0')
	{
		result[i] = str[j];
		i++;
		j++;
	}

}

int main()
{
	char str1[5];
	char str2[5];
	char result[10] = {};

	cin >> str1;
	cin >> str2;

	Sort(str1);
	Sort(str2);

	Gather(str1, result);
	Gather(str2, result);

	int i = 0;
	while (result[i] != '\0')
	{
		cout << result[i];
		i++;
	}

	return 0;
}