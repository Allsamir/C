#include <bits/stdc++.h>
using namespace std;

int main(void)
{
          char symbol;
          int x, y;

          cin >> x >> symbol >> y;

          if(int(symbol) == 60)
          {
                    x < y ? cout << "Right" << endl : cout << "Wrong" << endl;
          }
          else if (int(symbol) == 62)
          {
                    x > y ? cout << "Right" : cout << "Wrong" << endl;
          }
          else 
          {
                    x == y ? cout << "Right" : cout << "Wrong" << endl;
          }
          return 0;
}