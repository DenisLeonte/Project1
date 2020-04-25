#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	int n, m , k = 0;
	int a[100], b[100], c[200];

	ifstream in("intrare.in");

	in >> n >> m;
	for (int i = 0; i < n; i++)
	{
		in >> a[i];
	}

	for (int j = 0; j < m; j++)
	{
		in >> b[j];
	}

	for (int i = 0; i < n; i++)
	{
		cout << a[i]<<" ";
	}
	cout << endl;
	for (int j = 0; j < m; j++)
	{
		cout << b[j] << " ";
	}
	cout << endl;

	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0) 
		{
			c[k] = a[i];
			k++;
		}
	}
	for (int j = m - 1; j > 0; j--)
	{
		if (b[j] % 2 == 0)
		{
			c[k] = b[j];
			k++;
		}
	}

	for (int l = 0; l < k; l++)
	{
		cout << c[l] << " ";
	}
	cout << endl;

	return 0;
}