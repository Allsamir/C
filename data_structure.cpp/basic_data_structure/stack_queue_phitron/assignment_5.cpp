#include <bits/stdc++.h>

using namespace std;

int main(void)
{
          int t;
          cin >> t;

          for (int x = 0; x < t; x++)
          {
                    string s;
                    stack<char> zerost;
                    stack<char> onest;
                    cin >> s;

                    for (const char c: s)
                    {
                              if(c == '0')
                              {
                                        zerost.push(c);
                              }
                              else
                              {
                                        onest.push(c);
                                        if(!zerost.empty())
                                        {
                                            zerost.pop();
                                            onest.pop();
                                        }
                              }
                    }


                    if(zerost.empty() && onest.empty())
                    {
                              cout << "YES" << endl;
                    }
                    else
                    {
                              cout << "NO" << endl;
                    }
          }
          return 0;
}
