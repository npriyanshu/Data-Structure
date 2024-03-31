// get minimum element in a stack in O(1) T.C. and S.C.
#include<iostream>
#include<vector>
#include<stack>
using namespace std;
class SpecialStack {
    stack<int> s;
    int mini;

public:
    void push(int data) {
        if (s.empty()) {
            s.push(data);
            mini = data;
        } else {
            if (data < mini) {
                int value = 2 * data - mini;
                s.push(value);
                mini = data;
            } else {
                s.push(data);
            }
        }
    }

    void pop() {
        if (s.empty()) {
            return;
        }
        int curr = s.top();
        if (curr < mini) {
            mini = 2 * mini - curr;
        }
        s.pop();
    }

    int top () {
        if (s.empty()) {
            return -1; // or throw an exception
        }
        int curr = s.top();
        // if top is less than mini
        // only case where we 
        //convert it to that no which is smaller than mini
        if (curr < mini) {
            return mini;
        }
        return curr;
    }

    int getMin() {
        if (s.empty()) {
            return -1; // or throw an exception
        }
        return mini;
    }
  
};
int main()
{



return 0;
}