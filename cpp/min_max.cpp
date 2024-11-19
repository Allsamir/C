#include <bits/stdc++.h>
using namespace std;

int main(void)
{
          vector<int> arr;

          // Insert elements into the vector
          int x, y, z;
          cin >> x >> y >> z;

          arr.push_back(x);
          arr.push_back(y);
          arr.push_back(z);

          auto max = max_element(arr.begin(), arr.end());
          auto min = min_element(arr.begin(), arr.end());

          cout << *min << " " << *max << endl;

          return 0;
}