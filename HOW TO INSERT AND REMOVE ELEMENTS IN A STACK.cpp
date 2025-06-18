// c++ code of how to isert and remove elements in a stack
// RODNEY VALENCIA SANDE
// BSE-01-0212/2024


#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> myStack;

    // Insert elements into the stack (PUSH)
    myStack.push(10);
    myStack.push(20);
    myStack.push(30);

    cout << "Top element: " << myStack.top() << endl; // Should be 30

    // Remove elements from the stack (POP)
    myStack.pop();  // Removes 30

    cout << "Top element after pop: " << myStack.top() << endl; // Should be 20

    // Check if stack is empty
    if (myStack.empty()) {
        cout << "Stack is empty" << endl;
    } else {
        cout << "Stack is not empty" << endl;
    }

    return 0;
}

