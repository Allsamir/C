#include <bits/stdc++.h>
using namespace std;

int main(void)
{
          int n;
          cin >> n;

          vector<int> arr;

          for (int x = 0; x < n; x++)
          {
                    int temp;

                    cin >> temp;
                    arr.push_back(temp);
          }

          sort(arr.begin(), arr.end());

          for(const auto& value: arr)
          {
                    cout << value << " ";
          }

          return 0;
}