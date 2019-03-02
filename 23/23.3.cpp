#include <iostream>
using namespace std;

int main ()
{
    int a[5] = {23, 30, 41, 57, 75};
    int temp = 0;
    for (int i = 0; i < 10; i ++)
    {
        temp = a[4] - a [3];
        a[4] = a[3];
        a[3] = a[2];
        a[2] = a[1];
        a[1] = a[0];
        a[0] = temp;
    }
    for (int i = 0; i < 5; i ++)
    {
        cout << a[i];
    }
    return 0;
}
