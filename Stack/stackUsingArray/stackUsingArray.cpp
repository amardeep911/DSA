#include <iostream>
#include <math.h>
#include <stack>
using namespace std;

class Stack
{

    // properties
public:
    int *arr;
    int size;
    int top;
    // bheavior

    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element)
    {
        if (size - top > 1)
        {
            top++;
            arr[top] = element;
        }
        else
        {
            cout << "segmentation fault" << endl;
        }
    }

    void pop()
    {
        if (top >= 0)
        {
            top--;
        }
        else
        {
            cout << "stack underflow" << endl;
        }
    }

    int peek()
    {
        if (top >= 0)
            return arr[top];
        else
            cout << "stack is empty" << endl;
        return -1;
    }

    bool isEmpty()
    {
        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
    Stack st(5);
    st.push(3);
    st.push(4);
    st.push(12);
    st.push(123);
    st.push(56);
    st.push(1);

    st.pop();

    if (st.isEmpty())
    {
        cout << "yes it is emeopty" << endl;
    }
    else
        cout << "not empty " << endl;
    cout << "top element is " << st.peek() << endl;
}