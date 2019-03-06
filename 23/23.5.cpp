#include <iostream>
#include <cmath>
using namespace std;

int main () 
{
    int n = 295, temp = 4, curent = 1;
    for (int i = 1; i < n; i ++)
    {
        if (temp < n) temp += pow(4, i + 1);
        else 
        {
            curent = i;
            break;
        }
    }
    n -= temp - pow(4, curent);
    char a[curent];
    for (int i = 0; i < 4; i ++)
    {
        if (n > pow(4, curent - 1)) 
        {
            a[i] = 'B';
            if(n > 2 * pow(4, curent - 1)) a[i] = 'C';
            if(n > 3 * pow(4, curent - 1)) a[i] = 'D';
            cout << a[i];
            int f = pow(4, curent - 1);
            n %= f;
            curent --;
        }
        else
        {
            a[i] = 'A';
            int f = pow(4, curent - 1);
            n %= f;
            curent --;
            cout << a[i];
        }
    }
    return 0;
}
