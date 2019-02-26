#include <iostream>
using namespace std;

int main() {
	int n, m, x = 0 , y = 0, maxSum = 0;
	cin >> n >> m;
	int a [n][m];
	for (int i = 0; i < n; i++)
    	for (int j = 0; j < m; j++)
    		cin >> a[i][j];
	
	int max;
	
	for (int i = 0; i < n - 2; i++) 
	{
    	for (int j = 0; j < m - 2; j++)
    	{
    		max = a[i][j] + a[i][j + 1] + a[i][j + 2] + a[i + 1][j] + a[i + 1][j + 1] + a[i + 1][j + 2] + a[i + 2][j] + a[i + 2][j + 1] + a[i + 2][j + 2];
    		if (maxSum < max)
    		{
    			maxSum = max;
    			x = i;
    			y = j;
    		}
    		
    	}
	}
	
	cout << "Max matrix[3][3]: " << endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
			cout << a[x + i][y + j] << " ";
			cout << endl;
	}
	cout << "And its sum = " << maxSum;
	return 0;
}
