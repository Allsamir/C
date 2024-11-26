#include <bits/stdc++.h>
using namespace std;

int main(void)
{
          string s;
          cin >> s;

          for(int x = 1; x < s.size() / 2; x++)
          {
                    if(s[x - 1] != s[s.size() - x])
                    {
                              cout << "NO" << endl;
                              return 0;
                    }
          }

          cout << "YES" << endl;
          return 0;
}