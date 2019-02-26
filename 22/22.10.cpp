#include <iostream>
#include <cmath>
using namespace std;

void Matrix ( int** arr, int n, int m)
{
	int max, min, temp_string_max = 0, temp_string_min = 0;
	max = 0;
	int max1 = 0;
	for (int i = 0; i < m; i ++)
		max += arr[0][i];
		min = max;
		
	for (int i = 1; i < n; i ++)
	{
		for (int j = 0; j < m; j ++)
		{
					
			for (int r = 0; r < m; r ++)
				max1 += arr[i][r];
			
			if (max < max1)
			{
				max = max1;
				temp_string_max = i;
			}
			else if (min > max1){
				temp_string_min = i;
				min = max1;
			}
		}
	}
	cout << "The biggest string: ";
	for (int q = 0; q < m; q++)
	{
		cout << arr[temp_string_max][q] << " ";	
	}
	cout << endl;
	cout << "Summ of elements in the biggest string: " << max << endl;
	
	cout << "The lest string: ";
	for (int q = 0; q < m; q++)
	{
		cout << arr[temp_string_min][q] << " ";	
	}
	cout << endl;
	cout << "Summ of elements in the lest string: " << min << endl;
	
	
}

int main()
{
    int n;
    int m;
    cin >> n >> m;
    int a[n][m];
    for (int i = 0; i < n; i++)
    	for (int j = 0; j < m; j++)
    		cin >> a[i][j];
    Matrix(a, n, m);
    return 0;
}
