#include <bits/stdc++.h>
using namespace std;

int leader[100005];
int group[100005];

int find(int node) // O(log N)
{
          if (leader[node] == -1)
                    return node;

          int leader_index = find(leader[node]);
          leader[node] = leader_index; // Updating the leader array
          return leader_index;
}

void dsu_union(int a, int b)
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
          cin >> n >> e;
          memset(leader, -1, sizeof(leader));
          memset(group, 1, sizeof(group)); // Initialize all elements as 1
          
          bool cycle = false;
          while(e--)
          {
                    int a, b;
                    cin >> a >> b;
                    int leader_a = find(a);
                    int leader_b = find(b);

                    if(leader_a == leader_b)
                    {
                              cycle = true;
                    }
                    else 
                    {
                              dsu_union(a, b);
                    }
          }

          if(cycle)
          {
                    cout << "Graph contains cycle" << endl;
          }
          else 
          {
                    cout << "Graph does not contain cycle" << endl;
          }
          return 0;
}