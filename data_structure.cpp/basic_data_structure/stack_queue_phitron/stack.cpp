#include <bits/stdc++.h>

using namespace std;

class MyStack {
  public:
//     vector<int> v;
      list<int> dl;

    void push(int val)
    {
        dl.push_back(val);
    }

    void pop()
    {
        dl.pop_back();
    }

    int top()
    {
        return dl.back();
    }

    int size()
    {
        return dl.size();
    }

    bool empty()
    {
        return dl.empty();
    }
};

int main(void)
{
    MyStack st;

//     st.push(10);
//     st.push(20);
//     st.push(30);

//     st.pop();
//     cout << st.top() << " ";
//     st.pop();
//     cout << st.top() << " ";
//     st.pop();
//     if (!st.empty())
//         cout << st.top() << " ";

//     if (!st.empty())
//         st.pop();

    int n;
    cin >> n;

    for (int x = 0; x < n; x++)
    {
      int z;
      cin >> z;
      st.push(z);
    }

    while(!st.empty())
    {
      cout << st.top() << " ";
      st.pop();
    }

    cout << endl;
    return 0;
}
