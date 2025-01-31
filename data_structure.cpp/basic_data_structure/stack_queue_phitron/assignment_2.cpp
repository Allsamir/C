#include <bits/stdc++.h>

using namespace std;

class Node {
  public:
    Node *prev = NULL;
    int val;
    Node *next = NULL;

    Node(int value) : val(value) {}
};

class MyQueue {
  public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;

    void push(int val)
    {
        Node *newNode = new Node(val);

        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            sz++;
            return;
        }

        tail->next = newNode;
        tail = newNode;
        sz++;
    }

    void pop()
    {
        Node *deleteNode = head;

        if (head == NULL)
        {
            tail = NULL;
            return;
        }

        head = head->next;
        delete deleteNode;
        sz--;
    }

    int front()
    {
          return head->val;
    }

    int size()
    {
          return sz;
    }

    bool empty()
    {
          return head == NULL;
    }
};

class MyStack {
  public:
    Node *head = NULL;
    int sz = 0;

    void push(int val)
    {
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = newNode;
            sz++;
            return;
        }

        newNode->next = head;
        sz++;
        head = newNode;
    }

    void pop()
    {
        Node *deleteNode = head;
        head = head->next;
        sz--;
        delete deleteNode;
    }

    int top()
    {
        return head->val;
    }

    int size()
    {
        return sz;
    }

    bool empty()
    {
        return head == NULL;
    }
};

int main(void)
{
    int n, m;
    cin >> n >> m;
    MyStack st;
    MyQueue q;
    for (int x = 0; x < n; x++)
    {
        int val;
        cin >> val;
        st.push(val);
    }

    for(int x = 0; x < m; x++)
    {
              int val;
              cin >> val;
              q.push(val);
    }

    bool f = true;

    while(!st.empty() && !q.empty())
    {
              if(st.top() != q.front())
              {
                        f = false;
                        break;
              }
              st.pop();
              q.pop();
    }

    if(!f || !st.empty() || !q.empty())
    {
          cout << "NO" << endl;
    }
    else
    {
          cout << "YES" << endl;
    }

    // cout << "YES" << endl;
//     while (!st.empty())
//     {
//         cout << st.top() << " ";
//         st.pop();
//     }
//     cout << endl;
//     while (!q.empty())
//     {
//         cout << q.front() << " ";
//         q.pop();
//     }
//     cout << endl;
    return 0;
}
