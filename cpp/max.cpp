#include <bits/stdc++.h>
using namespace std;

int main(void)
{
          int x;
          cin >> x;

          vector<int> arr(x);
          vector<int>::iterator max;
          for (int i = 0; i < x; i++)
          {
                    cin >> arr[i];
          }

          max = max_element(arr.begin(), arr.end());

          cout << *max << endl;
          return 0;
}