#include <bits/stdc++.h>

using namespace std;

int main(void)
{
          int q;
          cin >> q;

          queue<string> nq;
          int comand;
          for (int x = 0; x < q; x++)
          {
                    cin >> comand;

                    if(comand == 0)
                    {
                              string s;
                              cin >> s;
                              nq.push(s);
                    }
                    else
                    {
                              if(nq.empty())
                              {
                                  cout << "Invalid" << endl;
                              }
                              else
                              {
                                        cout << nq.front() << endl;
                                        nq.pop();
                              }
                    }
          }
          return 0;
}
