#include <iostream>
#include <cmath>
using namespace std;

int FindDot(int y1, int x1) 
{
    if (x1 * x1 + y1 * y1 <= 9)
        if(y1 >= abs(x1))
            return 1;
    else return 0;
}

int main()
{
    int int_x1, int_y1;
    cin >> int_x1 >> int_y1;
    if (FindDot(int_y1, int_x1) == 1)
		cout << "This dot in zone";
    else
    	cout << "This dot out of zone";
    return 0;
}
