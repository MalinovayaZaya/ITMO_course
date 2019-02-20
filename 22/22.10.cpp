#include <iostream>
#include <cmath>
using namespace std;

int MaxMin(int m, int string)
{
		int max = 0;
	
	for (int i = 0; i < m; i ++)
		max += arr[string][i];
		
		returm max;
}

void Matrix ( int** arr, n, m)
{
	int max, min, temp, temp_string_max = 0, temp_string_min = 0;
	max = 0;
	
	for (int i = 0; i < m; i ++)
		max += arr[0][i];
		min = max;
		
	for (int i = 1; i < n; i ++)
	{
		for (int j = 0; j < m; j ++)
		{
			temp = MaxMin(m, i);
			if (max < temp)
			{
				max = temp;
				temp_string_max = 0
			}
			else if (min > temp){
				temp_string_min = i;
				min = temt;
				
			}
		}
	}
}

int main()
{
    int n, m;
    cin >> n >> m;
    return 0;
}
