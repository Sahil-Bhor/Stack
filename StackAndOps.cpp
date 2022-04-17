#include <iostream>
#define size 5
using namespace std;

class Stack
{
public:
    int top, arr[size];

    Stack()
    {
        this->top = -1;
    }

    void push(int element)
    {
        if (top == size - 1)
        {
            // cout << "Stack Overflow !";
            return;
        }
        top++;
        arr[top] = element;
    }

    int peek()
    {
        if (top == -1)
        {
            cout << "\nStack is Empty !";
            return -1;
        }
        return arr[top];
    }

    void pop()
    {
        if (top == -1)
        {
            cout << "\nStack Underflow !";
            return;
        }
        top--;
    }

    bool isEmpty()
    {
        bool val;
        if (top == -1)
        {
            cout << "\nStack is Empty !";
            val = true;
        }
        else
        {
            val = false;
        }
        return val;
    }

    bool isFull()
    {
        bool val;
        if (top == size - 1)
        {
            cout << "\nStack is Full !";
            val = true;
        }
        else
        {
            cout << "\nStack is not Full."
                 << size - top - 1 << " space(s) left.";
            val = false;
        }
        return val;
    }

    void emptySpaces()
    {
        cout << "\nStack has " << size - top - 1 << " space(s) left.";
    }

    void printStack()
    {

        cout << "\n\nStack: ";
        while (top != -1)
        {
            cout << this->arr[top] << " ";
            top--;
        }
    }
};

int main()
{
    Stack s;
    s.push(2);
    s.push(1);
    s.push(3);
    s.push(9);

    // s.pop();
    // s.pop();
    // s.pop();
    // s.pop();
    // s.pop();

    // s.isEmpty();
    // s.isFull();

    s.printStack();

    cout << endl;
    return 0;
}