#include<iostream>

using namespace std;

class Queue
{
    int front,rear;
    int size;
    int arr[];

    public:
    Queue()
    {
        cout<<"Queue implementation using array"<<endl;
        cout<<"Enter the size of the Queue"<<endl;
        cin>>size;
        front = -1;
        rear = -1;
        for(int i=0;i<size;i++)
        {
            arr[i] = 0;
        }
    }
    bool isEmpty()
    {
        if(front==-1 && rear==-1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    bool isFull()
    {
        if(rear == size-1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    void Enqueue(int value)
    {
        if(isFull())
        {
            cout<<"Queue is full"<<endl;
        }
        else if(rear==-1 && front==-1)
        {
            front=0;
            rear=0;
        }
        else
        {
            rear++;
        }
        arr[rear] = value;
        cout<<"element added is "<<arr[rear]<<endl;
    }
    void Dequeue()
    {
        if(isEmpty())
        {
            cout<<"Queue is empty"<<endl;
        }
        else if(front==rear)
        {
            int x = arr[front];
            cout<<"removed element is "<<x<<endl;
            front=rear=-1;
        }
        else
        {
            int x = arr[front];
            cout<<"removed element is "<<x<<endl;
            arr[front]=0;
            front++;
        }
    }
    void count()
    {
        if(isEmpty())
        {
            cout<<"Queue is empty"<<endl;
        }
        else
        {
            cout<<"The no of elements in queue are "<<rear-front+1<<endl;
        }
    }
    void display()
    {
        cout<<endl;
        for(int i=0;i<size;i++)
        {
            cout<<arr[i]<<endl;
        }
    }
};

int main()
{
    Queue q;
    int value,option;
    do
    {
        cout<<"\nEnter\n1-->Enqueue\n2-->Dequeue\n3-->Empty\n4-->Full\n5-->to count\n6-->to display\n7-->to exit"<<endl;
        cout<<"enter an option"<<endl;
        cin>>option;

        switch (option)
        {
            case 1:
            cout<<"enter an element to add"<<endl;
            cin>>value;
            q.Enqueue(value);
            break;
            case 2:
            q.Dequeue();
            break;
            case 3:
            if(q.isEmpty())
            {
                cout<<"Queue is empty"<<endl;
            }
            else
            {
                cout<<"Queue has elements"<<endl;
            }
            break;
            case 4:
            if(q.isFull())
            {
                cout<<"Queue is full"<<endl;
            }
            else
            {
                cout<<"Queue is not full"<<endl;
            }
            break;
            case 5:
            q.count();
            break;
            case 6:
            q.display();
            break;
            case 7:
            option=0;
            break;
        }
    } while (option!=0);
    return 0;
}