#include <bits/stdc++.h>
using namespace std;

int main(void)
{
          // 1. Take input string from users
          string s;
          cin >> s;
          // 2. Initialize chars for the word EGYPT
          int e = 0;
          int g = 0;
          int y = 0;
          int p = 0;
          int t = 0;

          // for default
          int voi = 0;

          // 3. If any char found above increment the char value;
          for (const auto c : s)
          {
                    char lower_char = tolower(c);

                    lower_char == 'e' ? e++ : lower_char == 'g' ? g++
                                          : lower_char == 'y'   ? y++
                                          : lower_char == 'p'   ? p++
                                          : lower_char == 't'   ? t++
                                                                : voi++;
          }

          // 4. if all chars value are same then it is the output
          if(e == g == y == p == t)
          {
                    cout << e << endl;
          }
          // 5. if not same then the lower value is the time "EGYPT" word was in the string
          else 
          {
                 const int min_char = min({e, g, y, p, t});
                 cout << min_char << endl;
          }
          return 0;
}