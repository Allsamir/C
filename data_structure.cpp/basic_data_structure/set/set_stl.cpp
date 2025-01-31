#include <bits/stdc++.h>

using namespace std;

int main(void)
{
          set<int> s;

          int n;
          cin >> n;

          while(n--)
          {
                    int val;
                    cin >> val;
                    s.insert(val);
          }

          for(auto it = s.begin(), end = s.end(); it != end; it++)
          {
                    cout << *it << endl;
          }

          return 0;
}
