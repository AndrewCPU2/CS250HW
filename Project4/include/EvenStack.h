#ifndef EVENSTACK_H
#define EVENSTACK_H
#include <stack>

using namespace std;

class EvenStack
{
    public:
        EvenStack();
        bool empty();
        int pop();
        int top();
        void push(int);
        int size();
        void getEvenNumbers(stack<int>& inStack);
        void emptyStack();
    protected:

    private:
        stack<int> m_stack;
};

#endif // EVENSTACK_H
