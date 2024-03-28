#include <iostream>
#include "Node.cpp"
using namespace std;

// *** implement stack using Linked List ***

class Stack
{

private:
    int top;
    int size;
    Node *n;
    Node *head;
    Node *tail;

public:
    // constructor
    Stack(int size)
    {
        this->size = size;
        n = NULL;
        top = -1;
        head = n;
        tail = n;
    }

    void push(int element)
    {
        if (size - top > 1)
        {
            top++;
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
        if (top >= 0)
        {
            n->deleteNode(n->getLength(head),head,tail);
            top--;
        }
        else
        {
            cout << "Stack UnderFlow" << endl;
        }
    }

    // peek to see top element
    int peek()
    {
        if (top >= 0)
        {
            return tail->data;
        }
        else
        {
            cout << "Stack is Empty" << endl;
            return -1;
        }
    }

    bool isEmpty()
    {
        if (top<0)
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
    Stack s(5);
    s.push(1);
    string a = s.isEmpty() ? " it is empty": " its not empty ";
    cout<<a<<endl;
    s.push(2);
    s.push(10);
    s.push(130);
    s.push(102);
    s.push(101);

    cout<<endl;
    cout<<s.peek()<<endl;
    s.pop();
    cout<<s.peek()<<endl;
    s.pop();
    cout<<s.peek()<<endl;
    s.pop();
    cout<<s.peek()<<endl;
    s.pop();
    cout<<s.peek()<<endl;
    s.pop();
    cout<<s.peek()<<endl;
    s.pop();
    cout<<s.peek()<<endl;


    return 0;
}