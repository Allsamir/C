#include <bits/stdc++.h>

using namespace std;

class MyStack {
  public:
    stack<int> st;

    void push(int val)
    {
        st.push(val);
    }

    void pop()
    {
        st.pop();
    }

    int top()
    {
        return st.top();
    }

    int size()
    {
        return st.size();
    }

    bool empty()
    {
        return st.empty();
    }
};

int main(void)
{
          MyStack st1, st2;

          int n;
          cin >> n;

          for (int x = 0; x < n; x++)
          {
                    int z;
                    cin >> z;
                    st1.push(z);
          }

          while(!st1.empty())
          {
                    st2.push(st1.top());
                    st1.pop();
          }

          while(!st2.empty())
          {
                    cout << st2.top() << " ";
                    st2.pop();
          }
}
