#include <bits/stdc++.h>

using namespace std;

class MyQueue
{
          public:
          list<int> l;

          void push(int val)
          {
                    l.push_back(val);
          }

          void pop()
          {
                    l.pop_front();
          }

          int front()
          {
                    return l.front();
          }

          int back()
          {
                    return l.back();
          }

          int size()
          {
                    return l.size();
          }

          bool empty()
          {
                    return l.empty();
          }
};


int main(void)
{
    MyQueue queue;

    int n;
    cin >> n;

    for(int x = 0; x < n; x++)
    {
          int val;
          cin >> val;

          queue.push(val);
    }

    while(!queue.empty())
    {
          cout << queue.front() << " ";
          queue.pop();
    }
    cout << endl;
    return 0;
}
