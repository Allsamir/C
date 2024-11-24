#include <bits/stdc++.h>
using namespace std;

int main(void)
{
          int n;
          cin >> n;

          string s;
          cin >> s;

          int a = 0;
          int d = 0;

          for(auto i = s.begin(); i < s.end(); i++)
          {
                    if(*i == 'A')
                    {
                              a++;
                    }
                    else 
                    {
                              d++;
                    }
          }

          a > d ? cout << "Anton" : a == d ? cout << "Friendship" : cout << "Danik";

          return 0;
}