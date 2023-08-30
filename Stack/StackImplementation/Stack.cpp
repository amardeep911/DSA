#include <iostream>
#include <math.h>
#include <stack>
using namespace std;

int main()
{
    // creating a stack
    stack<int> s;
    s.push(2);
    s.push(3);
    s.pop();

    cout << "stack length is " << s.size() << endl;
    cout << "stack top is  " << s.top() << endl;
    return 0;
}
