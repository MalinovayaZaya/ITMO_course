#include <iostream>
#include <string>
using namespace std;


int main() {
string rainbow ;
int n = 98;
for (int i = 0; i < 98; i += 7)
{
	rainbow[i] += 'K';
	rainbow[i + 1] += 'O';
	rainbow[i + 2] += 'Y';
	rainbow[i + 3] += 'G';
	rainbow[i + 4] += 'L'; //Light blue
	rainbow[i + 5] += 'D'; //Dark blue
	rainbow[i + 6] += 'V';
}

while(rainbow.length() != 5)
{
	for (int i = 2; i < n; i +=3)
	{
		for (int j = i; j < n; ++j)
		{
			rainbow[j] = rainbow[j + 1];
		}
		i--;
		if (rainbow[i] != 'K' || rainbow[i] != 'O' || rainbow[i] != 'Y' || rainbow[i] != 'G' || rainbow[i] != 'L' || rainbow[i] != 'D' || rainbow[i] != 'V') break;
	}
}
cout << rainbow[3] << rainbow[4];

	return 0;
}
