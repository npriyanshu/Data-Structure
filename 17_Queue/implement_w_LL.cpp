#include <iostream>
#include "Node.cpp"
using namespace std;

class Queue
{

private:
    int rear;
    int size;
    Node *n;
    Node *head;
    Node *tail;

public:
    // constructor
    Queue(int size)
    {
        this->size = size;
        n = NULL;
        rear = -1;
        head = n;
        tail = n;
    }

    void push(int element)
    {
        if (size - rear >= 1)
        {
             rear = rear == -1 ? 1 : rear + 1;
           
            if(n == NULL){
                n = new Node(element);
                this->head = n;
                this->tail = n;
                return;
            }
            n->InsertAtTail(tail, element);
        }
        else
        {
            cout << "Stack OverFlow" << endl;
        }
    }

    void pop()
    {
        if (rear > 0)
        {
            n->deleteNode(1,head,head);
             rear = rear == 1 ? -1 : rear - 1;
        }
        else
        {
            cout << "Stack UnderFlow" << endl;
        }
    }

    // peek to see rear element
    int back()
    {
        if (rear >= 0)
        {
            return tail->data;
        }
        else
        {
            cout << "Stack is Empty" << endl;
            return -1;
        }
    }

    int front()
    {
        if (rear >= 0)
        {
            return head->data;
        }
        else
        {
            cout << "Stack is Empty" << endl;
            return -1;
        }
    }

    bool isEmpty()
    {
        if (rear<0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    int length()
    {
        return  rear = rear == -1 ? 0 : rear;
    }
};

int main()
{
    Queue q(5);
    q.push(1);
//     string a = q.isEmpty() ? " it is empty": " its not empty ";
//     cout<<a<<endl;
//     q.push(2);
//     q.push(10);
//     q.push(130);
//     q.push(102);

// cout<<q.length()<<endl;
// q.pop();
// cout<<q.length()<<endl;
// q.pop();
// q.push(1);
// q.push(2);
// cout<<q.length()<<endl;

// cout<<q.front()<<endl;
// cout<<q.back()<<endl;

cout<<q.length()<<endl;

    return 0;
}
