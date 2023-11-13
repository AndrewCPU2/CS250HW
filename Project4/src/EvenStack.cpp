#include "EvenStack.h"
#include <iostream>

using namespace std;

EvenStack::EvenStack()
{
   //ctor
}
bool EvenStack::empty()
{
    return m_stack.empty();
}
int EvenStack::size()
{
    return m_stack.size();
}
int EvenStack::top()
{
    return m_stack.top();
}
void EvenStack::push(int val)
{
    if (val % 2 == 0)
    {
        m_stack.push(val);
    }
}
int EvenStack::pop()
{
    if (!m_stack.empty())
    {
        m_stack.pop();
    }
}
void EvenStack::getEvenNumbers(stack<int>& inStack)
{
    stack<int> storageStack;
    while (!inStack.empty())
    {
        if (inStack.top() % 2 == 0)
        {
            storageStack.push(inStack.top());
        }
        inStack.pop();
    }
    while (!storageStack.empty())
    {
        m_stack.push(storageStack.top());
        storageStack.pop();
    }
}
void EvenStack::emptyStack()
{
    cout << "Error - Can only push out even numbers." << endl << "Removing the following. " << endl;
    while (!m_stack.empty())
    {
        cout << m_stack.top() << " ";
        m_stack.pop();
    }
    cout << endl;
}
