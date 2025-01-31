#include <bits/stdc++.h>

using namespace std;

class MyStack {
          public:
          vector<int> st;

          void push(int val)
          {
                    st.push_back(val);
          }

          void pop()
          {
                    st.pop_back();
          }

          int top()
          {
                    return st.back();
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
          int n, n2;

          cin >> n;

          MyStack s1;

          for(int x = 0; x < n; x++)
          {
                    int z;
                    cin >> z;
                    s1.push(z);
          }

          cin.ignore();
          cin >> n2;

          MyStack s2;

          for(int x = 0; x < n2; x++)
          {
                    int z;
                    cin >> z;
                    s2.push(z);
          }

          int flag = 0;
          while(!s1.empty())
          {
                    if(s1.top() != s2.top())
                    {
                              flag = 1;
                              break;
                    }

                    s1.pop();
                    s2.pop();
          }

          flag ? cout << "NO" << endl : cout << "YES" << endl;
}
