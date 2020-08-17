#include <iostream>
using namespace std;
class queue_array
{
private:
    /* data */
    int rear = -1;
    int front = -1;
    int arr[8];

public:
    queue_array(/* args */);
    void enqueue(int item);
    int dequeue();
    void display();
    bool isEmpty();
    bool isFull();
};

queue_array::queue_array(/* args */)
{
    for (int i = 0; i < 8; i++)
    {
        arr[i] = 0;
    }
}
void queue_array::enqueue(int item)
{
    if (isFull())
    {
        cout << "The queue is full" << endl;
    }
    else if (isEmpty())
    {
        front = 0;
        rear = 0;
        arr[rear] = item;
    }

    else
    {
        rear++;
        arr[rear] = item;
    }
}
int queue_array::dequeue()
{
    int x;
    if (isEmpty())
    {
        cout << "The Queue is Empty" << endl;
        return 0;
    }
    else if (front == rear)
    {
        x = arr[front];
        front = -1;
        rear = -1;
    }
    else
    {
        x = arr[front];
        front++;
    }
    return x;
}
bool queue_array::isEmpty()
{
    if (front == -1 && rear == -1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool queue_array::isFull()
{
    if (rear ==7)
        return true;
    else
    {
        return false;
    }
}
void queue_array::display()
{
    cout<< "The Queue is: ";
    for (int i = front; i <= rear; i++)
    {
        cout << arr[i];
        if (i == rear)
            cout << "" << endl;
        else
        {
            cout << "-->";
        }
    }
    cout<<endl;
}

int main()
{
    int choice;
    queue_array q1;
    while (true)
    {
        cout << "1. Enqueue  2. Dequeue   3. IsEmpty    4. IsFull   5.Display" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            int item;
            cout << "Enter the item to qnueue " << endl;
            cin >> item;
            q1.enqueue(item);
            break;
        case 2:
            q1.dequeue();
            break;
        case 3:
            if (q1.isEmpty())
                cout << "The Queue Is empty " << endl;
            else
            {
                cout << "Not empty" << endl;
            }
            break;
        case 4:
            if (q1.isFull())
                cout << "The Queue is full" << endl;
            else
            {
                cout << "The Queue is not full" << endl;
            }
            break;
        case 5:
            q1.display();
            break;

        default:
            break;
        }
    }
}
