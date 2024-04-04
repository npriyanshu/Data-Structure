#include<iostream>
#include<queue>
using namespace std;

// our own implementation
class Deque
{
    int *arr;
    int size;
    int front;
    int rear;
public:
    // Initialize your data structure.
    Deque(int n)
    {
        // Write your code here.
        size = n;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    // Pushes 'X' in the front of the deque. Returns true if it gets pushed into the deque, and false otherwise.

    bool pushFront(int x)
{
    if (isFull()) {
        return false;
    }
    else if (front == -1) {
        // first push
        front = rear = 0;
    }
    else if (front == 0 && rear != size - 1) {
        front = size - 1;
    }
    else {
        front--;
    }
    arr[front] = x;
    return true;
}

    // Pushes 'X' in the back of the deque. Returns true if it gets pushed into the deque, and false otherwise.
    bool pushRear(int x)
    {
        // Write your code here.
        if(isFull()){
return false;
        }
        if(rear == -1){
            front = rear = 0;
        }
        // maintaining cyclic nature
        else if(rear == size-1 && front != 0){
         rear = 0;
        }
        else{
         rear++;
        }
        arr[rear] = x;
        return true;
    }

    // Pops an element from the front of the deque. Returns -1 if the deque is empty, otherwise returns the popped element.
    int popFront()
    {
      if(isEmpty()){
            return -1;
        }

        int ans = arr[front];
        arr[front] = -1;

        if(front == rear){ // single element is present
        front = rear = -1;
        }
       else if(front == size-1){
            front = 0; // to maintain cylic nature
        }
        else{
            front ++;
        }
        return ans;
    }

    

    // Pops an element from the back of the deque. Returns -1 if the deque is empty, otherwise returns the popped element.
    int popRear()
    {
        if(front == -1){
            return -1;
        }
        int ans = arr[rear];
        arr[rear] = -1;

        if(front == rear){ // single element is present
        front = rear = -1;
        }
       else if(rear == 0){
            rear = size-1; // to maintain cylic nature
        }
        else{
            // normal flow
            rear--;
        }
        return ans;
    }
    

    // Returns the first element of the deque. If the deque is empty, it returns -1.
    int getFront()
    {
        // Write your code here.
        if(isEmpty()){
            return -1;
        }
        return arr[front];
    }

    // Returns the last element of the deque. If the deque is empty, it returns -1.
    int getRear()
    {
         // Write your code here.
        if(isEmpty()){
            return -1;
        }
        return arr[rear];
    }

    // Returns true if the deque is empty. Otherwise returns false.
    bool isEmpty()
    {
        // Write your code here.
        if(front == -1){
            return true;
        }
        return false;
    }

    // Returns true if the deque is full. Otherwise returns false.
    bool isFull()
    {
        // Write your code here.
        if((front == 0 && rear == size - 1) ||
            ( front != 0 && rear == (front - 1) % (size - 1))){
return true;
        }
        else{
            return false;
        }
    }
};



int main()
{
    /*
// implementing doubly ended queue with stl
deque <int> d; // creating a deque of integers

d.push_front(12);
d.push_back(30);


cout<<d.front()<<endl;
cout<<d.back()<<endl;

d.pop_front();
cout<<d.front()<<endl;
*/
Deque q(5);
cout<<q.isFull()<<endl;
 
 
return 0;
}