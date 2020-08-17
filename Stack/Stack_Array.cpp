#include <iostream>
#include <string>
using namespace std;
class Stack_Array
{
private:
    int top;
    int arr[8];
    int size;

public:
    Stack_Array()
    {
        top = -1;
        for (int i = 0; i < 8; i++)
        {
            arr[i] = 0;
        }
    }
    void push(int item)
    {
        
        if (isFull())
        {
            cout << " The Stack is full. You Can't Input " << endl;
            
        }
        else
        {
            top++;
            arr[top] = item;
        }
    }
    int pop()
    {
        if (isEmpty())
        {
            cout << "The satck is Empty" << endl;
            return 0;
        }
        else
        {
            int item = arr[top];
            arr[top] = 0;
            top--;
            return item;
        }
    }
    bool isEmpty()
    {
        if (top == -1)
            return true;
        else
        {
            return false;
        }
    }
    bool isFull()
    {
        if (top == 7)
            return true;
        else
        {
            return false;
        }
    }
    int peek(int position)
    {
        if(isEmpty()){
            cout<<"The stack is empty"<< endl;
            return 0;
        }
        else
        {
            return arr[position - 1];
        } 
    }
    int count()
    {
        return top+1;
    }
    void change(int item, int position)
    {
        arr[position - 1] = item;
    }
    void display()
    {
        cout << "The stack is : ";

        for (int i = 0; i < top; i++)
        {
            cout << arr[i];
            if (i == top)
                cout << "";
            else
            {
                cout << "-->";
            }
        }
        cout << endl;
    }
};

int main()
{
    Stack_Array stack1;
    int choice;
    int item;
    while (true)
    {
        cout << "1. Push       2. Pop      3. isEmpty      4. isFull " << endl;
        cout << "5. peek        6.count     7.change         8.display" << endl;
        cin >> choice;
        if (choice == 1)
        {
            cout << "Input the push item :-->";
            cin >> item;
            stack1.push(item);
        }
        else if (choice == 2)
        {
            cout << "The poped Item is :" << stack1.pop() << endl;
        }
        else if (choice == 3)
        {
            if (stack1.isEmpty())
                cout << "The Stack Is Empty" << endl;
            else
                cout << "The stack is not empty " << endl;
        }
        else if (choice == 4)
        {
            if (stack1.isFull())
                cout << "The Stack Is Full" << endl;
            else
                cout << "The stack is not Full " << endl;
        }
        else if (choice == 5)
        {
            int position;
            cout << "Enter the position" << endl;
            cin >> position;
            cout << "The item is : " << stack1.peek(position) << endl;
        }
        else if (choice == 6)
        {
            cout << "The Count is : " << stack1.count() << endl;
        }
        else if (choice == 7)
        {
            int item, position;
            cout << "Enter the Item" << endl;
            cin >> item;
            cout << "Enter the Position" << endl;
            cin >> position;
            stack1.change(item, position);
        }
        else if (choice == 8)
        {
            stack1.display();
        }
    }
}
