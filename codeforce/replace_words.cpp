#include <bits/stdc++.h>
using namespace std;

int main(void)
{
          string s;
          cin >> s;

          for(int x = 0; x < s.size(); x++)
          {         
                    // check the EGYPT word
                    if(s[x] == 'E')
                    {
                              if(s[x + 1] == 'G')
                              {
                                        if(s[x + 2] == 'Y')
                                        {
                                                  if(s[x + 3] == 'P')
                                                  {
                                                            if(s[x + 4] == 'T')
                                                            {
                                                                      // if found replace it with " " space;
                                                                      s.replace(x, 5, " ");
                                                            }
                                                  }
                                        }
                              }
                    }
          }

          cout << s << endl;

          return 0;
}