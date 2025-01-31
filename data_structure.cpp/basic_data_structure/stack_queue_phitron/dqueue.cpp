#include <bits/stdc++.h>

using namespace std;

class Node {

    public:
    int value;
    Node *next;
    Node *prev;

    Node(int val)
    {
        this->prev = NULL;
        this->value = val;
        this->next = NULL;
    }
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
        newNode->prev = tail;
        tail = newNode;
        sz++;
    }

    void pop()
    {
        Node *temp = head;
        head = temp->next;
        delete temp;
        sz--;
        if (head == NULL)
        {
          tail = NULL;
          return;
        }
        head->prev = NULL;

    }

    int front()
    {
          return head->value;
    }

    int back()
    {
          return tail->value;
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
    MyQueue q;

    int n;
    cin >> n;

    for(int x = 0; x < n; x++)
    {
          int z;
          cin >> z;
          q.push(z);
    }

    cout << q.size();
    cout << endl;

    while (!q.empty())
    {
          cout << q.front() << " ";
          q.pop();
    }
    return 0;
}
