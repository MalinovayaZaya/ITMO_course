#include <iostream>
using namespace std;

int main() {
	int sum_a = 0; int sum_b = 0, n = 0, temp;
	cin >> n;
	char mass[n];
	for (int i = 0; i < n; i ++)
	{
		cin >> mass[i];
		if (mass[i] == 'a') sum_a ++;
		else if (mass[i] == 'b') sum_b ++;
	}
	cout << sum_a << " " << sum_b;
	return 0;
}
