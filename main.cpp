#include <iostream>
using namespace std;

int queue[100], n = 100, front = - 1, rear = - 1;

void Insert()
{
    int value;
    if(rear==n-1)
    {
        cout<<"Queue is full"<<endl;
    }
    else
    {
        if(front == -1)
            front = 0;
        cout<<"enter a element: "<<endl;
        cin>>value;
        rear++;
        queue[rear]=value;
    }
}
void Delete()
{
    if(front == -1 || front>rear)
    {
        cout<<"Queue is empty"<<endl;
    }
    else
    {

        cout<<"element deleted from queue: "<<queue[front]<<endl;
        front++;
    }
}
void Display()
{
    if(front == -1 || front>rear)
    {
        cout<<"Queue is empty"<<endl;
    }
    else
    {
        cout<<"Queue elements are: ";
        for(int i = front; i<=rear; i++)
        {
            cout<<queue[i]<<" ";
        }
        cout<<endl;
    }
}
void IsEmpty()
{
    if(front == -1 || front>rear)
    {
        cout<<"Queue is empty"<<endl;
    }
    else
    {
        cout<<"Queue is not empty"<<endl;
    }
}
int ReturnFront()
{
    if(front == -1){
        cout<<"Queue is empty"<<endl;
    }
    else
        cout<<"Front of queue is: "<<queue[front]<<endl;
}
int main()
{
    int ch;
    do
    {
        cout<<"1) Enqueue"<<endl;
        cout<<"2) Dequeue"<<endl;
        cout<<"3) Display"<<endl;
        cout<<"4) IsEmpty"<<endl;
        cout<<"5) Front"<<endl;
        cout<<"6) Exit"<<endl;
        cout<<"Enter your choice : "<<endl;
        cin>>ch;
        system("CLS");
        switch (ch)
        {
        case 1:
            Insert();
            break;
        case 2:
            Delete();
            break;
        case 3:
            Display();
            break;
        case 4:
            IsEmpty();
            break;
        case 5:
            ReturnFront();
            break;
        case 6:
            break;
        default:
            cout<<"Invalid choice"<<endl;
        }
    }
    while(ch!=6);
    return 0;
}
