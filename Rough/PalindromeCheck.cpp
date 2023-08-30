#include <iostream>
#include <math.h>
#include <queue>
using namespace std;

int main()
{
    int n, num;
    int digit;
    int rev = 0;
    cout << "Enter any number" << endl;
    cin >> n;
    n = num;
    if (num < 0)
    {
        return -1;
    }
    do
    {
        digit = num % 10;
        rev = (rev * 10) + digit;
        num = num / 10;
    } while (num != 0);

    cout << "Reverse no is" << rev << endl;
    cout << n;
    if (rev == n)
    {
        cout << "it is palindrome" << endl;
    }
    else
    {
        cout << "not a palindrome" << endl;
    }
    return 0;
}