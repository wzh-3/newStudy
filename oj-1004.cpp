#include <iostream>
#include <string>
using namespace std;

string max(string arr[], int n);

int main()
{
	int n;
	while (cin >> n)
	{
		if (n == 0)
			break;

		string* arr = new string[n];
		for (int i = 0; i < n; i++)
			cin >> arr[i];

		cout << max(arr, n) << endl;

		delete[] arr;
	}
	return 0;
}

string max(string arr[], int n)
{
	int m = 0, index = 0;
	int* num = new int[n];

	for (int i = 0; i < n; i++)
	{
		int temp = 0;
		for (int j = 0; j <= i; j++)
		{
			if (arr[i] == arr[j])
				++temp;
		}
		num[i] = temp;
		if (num[i] > m)
		{
			m = num[i];
			index = i;
		}
	}

	delete[] num;
	return arr[index];
}
