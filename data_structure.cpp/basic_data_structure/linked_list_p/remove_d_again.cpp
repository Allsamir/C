#include <bits/stdc++.h>
using namespace std;

int main(void)
{
          list<int> l;

          int n;

          while(true)
          {
                    cin >> n;

                    if(n == -1)
                    {
                              break;
                    }

                    l.push_back(n);
          }

          l.sort();
          l.unique();

          for(const auto a : l)
          {
                    cout << a << " ";
          }

          cout << endl;

          return 0;
}
