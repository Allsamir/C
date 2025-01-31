#include <bits/stdc++.h>

using namespace std;

int main(void)
{
          queue<int> q;
          int n;
          cin >> n;

          for (int x = 0; x < n; x++)
          {
              int val;
              cin >> val;

              q.push(val);
          }

          while (!q.empty())
          {
              cout << q.front() << " ";
              q.pop();
          }
          cout << endl;
}
