#include <iostream>
using namespace std;

int main ()
{
    int A = 1, B = 22, counter = 0;
    while(A != B)
    {
        A += 4;
        if (A > 23) A -= 23; 
        counter ++;
        if (A != B)
        B += 3;
        else break;
        if (B > 23) B -= 23;
    }
    
    cout << counter;
    
    return 0;
}
