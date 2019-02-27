#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

int main() {
	long long int X, Y, R;
    ifstream fin("input.txt");
if(fin.is_open())
{
    if(!fin.eof())
    {
     fin >> X >> Y;
    }
    fin.close(); 
}
else
{
    cout << "Fine not found";
}
ofstream fout("output.txt");
{
    if (- pow(2, 32) < X + Y && X + Y < pow(2, 32)) fout << X + Y;
    else fout << "\117\126\105\122\106\114\117\127";  //"OVERFLOW" - в кодировке Win-1251 (сайт с кодировками - "https://wiki.iarduino.ru/page/encoding-arduino/")
}
fout.close();
	return 0;
}
