#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int count = n; // Count the no of numbers per row
	for(int i = 0 ; i < n ; i++) // Rows
	{
		for(int j = 0 ; j < count ; j++) // Columns
		{
		    cout << "*" << " ";
		}
		count--;
		cout << endl;
	}

	return 0;
}
