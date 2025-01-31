#include <bits/stdc++.h>

using namespace std;

int main(void)
{
          int t;
          cin >> t;
          for (int x = 0; x < t; x++)
          {
                    string s;
                    cin >> s;

                    stack<int> zst;
                    stack<int> onst;

                    for (const char c: s)
                    {
                              if(c == '0')
                              {
                                        zst.push(c);
                              }
                              else
                              {
                                        onst.push(c);
                              }
                    }

                    while(!zst.empty() && !onst.empty())
                    {
                              zst.pop();
                              onst.pop();
                    }

                    if(!zst.empty() || !onst.empty())
                    {
                              cout << "NO" << endl;
                    }
                    else
                    {
                              cout << "YES" << endl;
                    }
          }
          return 0;
}
