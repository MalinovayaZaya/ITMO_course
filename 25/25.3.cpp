#include <iostream>
#include <string>
using namespace std;

int main() {
	int a = 0, temp = 0, words = 0, need_length, temp_2 = 0, temp_3 = 0;
	
	cout << ">> need_length >> temp_2 >> need_letters";
	cin >> need_length >> temp_2;
	
	string s;
	string need_letters;
	
	for (int i = 0; i < temp_2; i ++) cin >> need_letters[i];
	
	cout << ">> s[a], if end >> *";
	
	while (temp != -1)
	{
		cin >> s[a];
		if (s[a] == '*')
		{
			temp = -1;
			s.erase(s.begin() + (a - 1)); //удаление одного элемента, стоящего в стороке после (а - 1) элемента
		}
		if (s[a] == ' ')
		{
			 words ++;
			 
			 for (int i = 0; i < temp_2; i ++)
				if (a - temp + 1 + i == need_letters[i]) temp_3 ++;
				
			 if (temp_3 == temp_2)
			 {
			 	cout << "word with need letters: ";
					for (int i = temp; i > 0; i --)
				{
					cout << s[a - i + 1];
				}
				cout << endl;
			 }							 
			 if (need_length == temp_2)
			 {
			 	cout << "word need length: ";
				for (int i = temp; i > 0; i --)
				{
					cout << s[a - i + 1];
				}
				cout << endl;
			 }
			temp = 0;
		}
		else temp ++;

		a++;
	}
	
	return 0;
}
