#include <iostream>
#include <string>
using namespace std;

int main() {
	int a = 0, temp = 0, words = 0, need_length;
	string s;
	cin >> a;
	while (temp != -1)
	{
		cin >> s[a];
		if (s[a] == '1')
		{
			temp = -1;
			s.erase(s.begin() + (a - 1));
		}
		if (s[a] == ' ') words ++;
		a++;
	}
	return 0;
}
