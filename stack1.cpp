#include <iostream>
#define size 10
using namespace std;

class Stack
{
public:
    int *arr, top;

    Stack()
    {
        this->top = -1;
        arr = new int(size);
    }

    void push(int data)
    {
        if (top == size - 1)
        {
            cout << "Stack is Full!\n";
            return;
        }
        else
        {
            this->top++;
            arr[top] = data;
        }
    }
    void pop()
    {

        if (top < 0)
        {
            cout << "Stack is Empty!\n";
            return;
        }
        else
        {
            top--;
        }
    }

    void printStack()
    {
        int temp = top;

        if (top < 0)
        {
            cout << "Stack is Empty!\n";
            return;
        }
        else
        {
            cout << "Stack: ";
            while (temp != -1)
            {
                cout << arr[temp] << " ";
                temp--;
            }
        }
    }
    int peekS()
    {
        if (top < 0)
        {
            cout << "Stack is Empty!\n";
            return -1;
        }
        cout << "\nTop element: ";
        return arr[top];
    }
};

int main()
{
    Stack a1;
    int choice, p1, no;
    bool temp = true;

    while (temp)
    {
        cout << "\n1.Push\n2.Pop\n3.Display Stack\n4.Peek\n5.Delete Stack\n6.Exit\nEnter your choice: ";
        cin >> choice;
        cout << endl;

        switch (choice)
        {
        case 1:
            cout << "How many nos you want to insert: ";
            cin >> no;
            cout << "Enter element(s) to be pushed: ";
            for (int i = 0; i < no; i++)
            {
                cin >> p1;
                a1.push(p1);
            }
            break;

        case 2:
            a1.pop();
            cout << "Poped !";
            cout << endl;
            break;

        case 3:
            a1.printStack();
            cout << endl;
            break;

        case 4:
            cout << a1.peekS();
            break;

        case 5:
            delete a1.arr;
            a1.top = -1;
            cout << "\nStack Deleted.";
            break;

        case 6:
            temp = false;
            break;
        }
    }

    cout << endl;
    return 0;
}