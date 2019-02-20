#include <iostream>
#include <cmath>
using namespace std;

int FindDot(int x1, int y1, int x2, int y2, int x3, int y3) 
{
   int temp1, temp2, temp3;
   temp1 = x1 * (y2 - y1) - (x2 - x1) * y1;
   temp2 = x2 * (y3 - y2) - (x3 - x2) * y2;
   temp3 = x3 * (y1 - y3) - (x1 - x3) * y3;
   if (temp1 * temp2 * temp3 > 0) return 1;
	else return 0;
}

int main()
{
    int x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
 if (FindDot(x1, y1, x2, y2, x3, y3) == 1)
		cout << "This dot in zone";
    else
    	cout << "This dot out of zone";
    return 0;
}
