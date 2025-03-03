#include <bits/stdc++.h>
using namespace std;

vector<int> leader(1005, -1);
vector<int> group(1005, 1);
int find(int node)
{
          if (leader[node] == -1)
                    return node;

          int leader_index = find(leader[node]);
          leader[node] = leader_index;
          return leader_index;
}

void union_sets(int a, int b)
{
          int leader_a = find(a);
          int leader_b = find(b);

          if (group[leader_a] >= group[leader_b])
          {
                    leader[leader_b] = leader_a;
                    group[leader_a] += group[leader_b];
          }
          else
          {
                    leader[leader_a] = leader_b;
                    group[leader_b] += group[leader_a];
          }

}

int main(void)
{
          int n, e;
          cin >> n;
          e = n - 1;

          vector<pair<int, int>> rm;
          vector<pair<int, int>> cr;

          while (e--)
          {
                    int a, b;
                    cin >> a >> b;

                    int leader_a = find(a);
                    int leader_b = find(b);

                    if(leader_a == leader_b)
                    {
                              rm.push_back({a, b});
                    }
                    else
                    {
                              union_sets(a, b);
                    }

          }

          for(int i = 2; i <= n; i++)
          {
                    int leader_a = find(1);
                    int leader_b = find(i);

                    if(leader_a != leader_b)
                    {
                              union_sets(1, i);
                              cr.push_back({1, i});
                    }
          }

          cout << rm.size() << endl;

          for(int i = 0; i < rm.size(); i++)
          {
                    cout << rm[i].first << " " << rm[i].second << " " << cr[i].first << " " << cr[i].second << endl;
          }

          return 0;
}