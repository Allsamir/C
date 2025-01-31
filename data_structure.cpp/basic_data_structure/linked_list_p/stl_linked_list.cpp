#include <bits/stdc++.h>

using namespace std;

int main(void)
{
          int arr[] = {10, 20, 30, 40, 50};
          list<int> l(arr, arr + 5);

          l.clear();

          cout << l.size();
          
          for(auto a : l)
          {
                    cout << a << " ";
          }
          // cout << l.max_size() << " " ;
          return 0;
}
