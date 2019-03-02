#include <iostream>
#include <string>
using namespace std;


int main() {
int n = 98;	
char rainbow[n];
for (int i = 0; i < n; i += 7)
{
	rainbow[i] = 'K';
	rainbow[i + 1] = 'O';
	rainbow[i + 2] = 'Y';
	rainbow[i + 3] = 'G';
	rainbow[i + 4] = 'L'; //Light blue
	rainbow[i + 5] = 'D'; //Dark blue
	rainbow[i + 6] = 'V';
}

int kill = 0, temp = n - kill, n_1 = n - kill;
while (n_1 > 4)
{
	n_1 = n - n / 3;
	for (int i = 0; i < n_1; i ++)
	{
		if ((i + 1 + kill) % 3 == 0)
		if (temp > 4)
		{
			for (int j = i; j < temp - 1; j ++)
			rainbow [j] = rainbow[j + 1];
			rainbow[temp - 1] = '*';
			kill ++;
			temp --;
			i --;
		}
		else break;
	}
	n -= kill;
	kill = 0;
}
 cout << rainbow[2] << rainbow [3];
	return 0;
}
