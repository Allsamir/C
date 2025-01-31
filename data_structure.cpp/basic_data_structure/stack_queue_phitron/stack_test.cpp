#include <bits/stdc++.h>

using namespace std;

class MinStack {
  public:
    stack<int> st;
    stack<int> minStack;
    int f = 1;
    MinStack() {}

    void push(int val)
    {
        st.push(val);
        if (f)
        {
            minStack.push(val);
        }

        if (minStack.top() >= val)
        {
            minStack.push(val);
        }
        f = 0;
    }

    void pop()
    {
        if (!minStack.empty())
        {
            if (minStack.top() <= st.top())
            {
                minStack.pop();
            }
        }
        if (!st.empty())
        {
            st.pop();
        }
    }

    int top()
    {
        if (!st.empty())
            return st.top();
        return 1;
    }

    int getMin()
    {
        if (!minStack.empty())
            return minStack.top();
        return 1;
    }
};

int main(void)
{
          MinStack st;
          st.push(2);
          st.push(0);
          st.push(3);
          st.push(0);
          cout << st.getMin() << " ";
          st.pop();
          cout << st.top() << " ";
          cout << st.getMin() << " ";
          st.pop();
          cout << st.getMin() << " ";
          st.pop();
          cout << st.getMin() << " ";

          // st.pop();
          // cout << st.getMin() << " ";
          return 0;
}
