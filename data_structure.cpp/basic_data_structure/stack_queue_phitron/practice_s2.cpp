#include <bits/stdc++.h>

using namespace std;

class MyStack
{
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

class MyQueue
{
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


int main(void)
{
    int n, n2;

    cin >> n;

    MyStack s1;

    for (int x = 0; x < n; x++)
    {
        int z;
        cin >> z;
        s1.push(z);
    }

    cin.ignore();
    cin >> n2;

    MyQueue q;

    for (int x = 0; x < n2; x++)
    {
        int z;
        cin >> z;
        q.push(z);
    }

    int flag = 0;

    while(!s1.empty() && !q.empty())
    {
          if(s1.top() != q.front())
          {
                    flag = 1;
                    break;
          }
          s1.pop();
          q.pop();
    }

    flag ? cout << "NO" << endl : cout << "YES" << endl;
}
