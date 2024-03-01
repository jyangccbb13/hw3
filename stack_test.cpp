#include <iostream>
#include "stack.h"

using namespace std;

int main()
{
    Stack<int> testStack;
    for (int i = 0; i < 5; ++i)
    {
        testStack.push(i);
    }
    
    cout << "top: " << testStack.top() << endl;

    while (!testStack.empty())
    {
        cout << testStack.top() << endl;
        testStack.pop();
    }

}