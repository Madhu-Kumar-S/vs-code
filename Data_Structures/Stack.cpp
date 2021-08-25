#include<iostream>

using namespace std;

class Stack
{
    private:
    int top;
    int size;
    int arr[];
    public:
    Stack()
    {
        cout<<"Stack implementation using array"<<endl;
        cout<<"Enter the size of the stack"<<endl;
        cin>>size;
        top = -1;
        for(int i=0;i<size;i++)
        {
            arr[i] = 0;
        }
    }
    bool isEmpty()
    {
        if(top==-1)
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
        if(top==size-1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    void push(int val)
    {
        if(isFull())
        {
            cout<<"Stack Overflow"<<endl;
        }
        else
        {
            top++;
            arr[top]=val;
        }
    }
    void pop()
    {
        if(isEmpty())
        {
            cout<<"Stack Underflow"<<endl;
        }
        else
        {
            int temp=arr[top];
            arr[top]=0;
            cout<<"popped element is "<<temp<<endl;
            top--;
        }
    }
    void peek(int pos)
    {
        if(top==-1)
        {
            cout<<"Stack Underflow"<<endl;
        }
        else
        {
            int p = pos--;
            cout<<"Element found at "<<++pos<<" is "<<arr[p]<<endl;
        }
    }
    int count()
    {
        return top+1;
    }
    void change(int pos,int val)
    {
        int p = pos--;
        arr[p] = val;
        cout<<val<<" is changed at position "<<++pos<<endl;
    }
    void display()
    {
        cout<<"elements in the stack are:"<<endl;
        for(int i=0;i<size;i++)
        {
            cout<<arr[i]<<endl;
        }
    }
};

int main()
{
    Stack s;
    int option,value,position;
    do
    {
        cout<<"Enter\n1-->add element\n2-->remove element at the top\n3-->check if the stack is empty\n4-->check if the stack is full\n5-->return the element associated with that position\n6-->to count the no. of items\n7-->to change the element\n8-->to display\n9-->to exit"<<endl;
        cout<<"enter an option"<<endl;
        cin>>option;

        switch (option)
        {
            case 1:
            cout<<"enter an element to push into the stack."<<endl;
            cin>>value;
            s.push(value);
            break;
            case 2:
            s.pop();
            break;
            case 3:
            if(s.isEmpty())
            {
                cout<<"Stack is empty"<<endl;
            }
            else
            {
                cout<<"Stack contains elements"<<endl;
            }
            break;
            case 4:
            if(s.isFull())
            {
                cout<<"Stack is full"<<endl;
            }
            else
            {
                cout<<"Stack contains elements"<<endl;
            }
            break;
            case 5:
            cout<<"enter a position "<<endl;
            cin>>position;
            s.peek(position);
            break;
            case 6:
            cout<<"Total no of elements is: "<<s.count()<<endl;
            break;
            case 7:
            cout<<"enter a value and position"<<endl;
            cin>>value>>position;
            s.change(value,position);
            break;
            case 8:
            s.display();
            break;
            case 9:
            option=0;
            break;
        }
    } while (option!=0);
    return 0;
}