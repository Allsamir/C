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

                    if(s.size() > 10)
                    {
                              int middle_count = 0;

                              for(auto it = s.begin() + 1; it < s.end() - 1; it++)
                              {
                                        middle_count++;

                              }

                              cout << s.at(0) << middle_count << s.at(s.size() - 1) << endl;
                    }
                    else 
                    {
                              cout << s << endl;
                    }
          }

          return 0;
}