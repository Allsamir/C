#include <bits/stdc++.h>
using namespace std;

vector<int> leader(100005, -1);
vector<int> group(100005, 1);

int find(int node)
{
          if(leader[node] == -1)
             return node;
          
          int leader_index = find(leader[node]);
          leader[node] = leader_index;
          return leader_index;   
}

void union_set(int a, int b)
{
          int leader_a = find(a);
          int leader_b = find(b);

          if(group[leader_a] >= group[leader_b])
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
          cin >> n >> e;

          int count = 0;

          while(e--)
          {
                    int a, b;
                    cin >> a >> b;

                    int leader_a = find(a);
                    int leader_b = find(b);

                    if(leader_a == leader_b)
                    {
                              count++;
                    }
                    else
                    {
                              union_set(a, b);
                    }
          }

          cout << count << endl;

          return 0;
}