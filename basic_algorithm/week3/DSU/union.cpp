#include<bits/stdc++.h>

using namespace std;

int leader[105];
int group[105];

int find(int node) // O(log N)
{
          if(leader[node] == -1)
            return node;
          
          int leader_index = find(leader[node]);
          leader[node] = leader_index; // Updating the leader array
          return leader_index;  
}

void dsu_union(int a, int b)
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
int main()
{
          memset(group, 1, sizeof(group));
          memset(leader, -1, sizeof(leader)); // Initialize all elements as -1

          dsu_union(1, 2);
          dsu_union(2, 3);
          dsu_union(0, 2);

          for(int x = 0; x < 6; x++)
          {
                    cout << x << " -> " << leader[x] << endl;
          }
          return 0;
}