#include <bits/stdc++.h>

using namespace std;

class MyQueue {
  public:
    queue<int> q;

    void push(int val)
    {
        q.push(val);
    }

    void pop()
    {
        q.pop();
    }

    int front()
    {
        return q.front();
    }

    int back()
    {
        return q.back();
    }

    int size()
    {
        return q.size();
    }

    bool empty()
    {
        return q.empty();
    }
};

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
          MyQueue q1;
          MyQueue q2;
          MyStack st;

          int n;
          cin >> n;

          for (int x = 0; x < n; x++)
          {
                    int z;
                    cin >> z;
                    q1.push(z);
          }

          while(!q1.empty())
          {
                    st.push(q1.front());
                    q1.pop();
          }

          while(!st.empty())
          {
                    q2.push(st.top());
                    st.pop();
          }

          while(!q2.empty())
          {
                    cout << q2.front() << " ";
                    q2.pop();
          }

          cout << endl;
          return 0;
}
