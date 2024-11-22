#include <bits/stdc++.h>
using namespace std;

int main(void)
{
          // TODO:
          // 1. Need to take the input correctly.
          string s;

          // 2. Sort the string input of user in asending order.
          while (getline(cin, s))
          {
                    s.erase(remove(s.begin(), s.end(), ' '), s.end());
                    sort(s.begin(), s.end());
                    // 3. print the sorted string output.
                    cout << s << endl;
          }
}