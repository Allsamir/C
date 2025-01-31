#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int n;
    cin >> n;

    vector<int> vc(n);

    for (int x = 0; x < n; x++)
    {
        cin >> vc[x];
    }

    int val;
    cin >> val;

    vc.push_back(val);

    int curr_index = vc.size() - 1;

    while (curr_index != 0)
    {
        int parent_index = (curr_index - 1) / 2;

        if(vc[parent_index] > vc[curr_index])
        {
          swap(vc[parent_index], vc[curr_index]);
        }
        else
        {
          break;
        }

        curr_index = parent_index;
    }

    for (const auto v : vc)
        cout << v << " ";

    cout << endl;

    return 0;
}
