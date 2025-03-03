#include <bits/stdc++.h>
using namespace std;
vector<int> leader(100005, -1);
vector<int> group(100005, 1);
int cmp, mx;
int find(int node)
{
          if(leader[node] == -1)
             return node;
          
          int leader_index = find(leader[node]);
          leader[node] = leader_index;
          return leader_index;   
}

void union_sets(int a, int b)
{
          int leader_a = find(a);
          int leader_b = find(b);

          if(leader_a == leader_b) return;

          if(group[leader_a] >= group[leader_b])
          {
                    leader[leader_b] = leader_a;
                    group[leader_a] += group[leader_b];
                    mx = max(mx, group[leader_a]);
          }
          else
          {
                    leader[leader_a] = leader_b;
                    group[leader_b] += group[leader_a];
                    mx = max(mx, group[leader_b]);
          }
          
          cmp--;
}

int main(void)
{
          int n, e;

          cin >> n >> e;
          cmp = n;
          mx = 1;

          while(e--)
          {
                    int a, b;
                    cin >> a >> b;

                    union_sets(a, b);

                    cout << cmp << " " << mx << endl;
          }
          return 0;
}