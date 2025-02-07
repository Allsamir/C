#include <bits/stdc++.h>
using namespace std;

void dfs(vector<int> (&adj_list)[], int src, bool (&visited)[], int &count)
{
          visited[src] = true;

          for(auto x : adj_list[src])
          {
                    if(!visited[x])
                    {
                              count++;
                              dfs(adj_list, x, visited, count);
                    }
          }
}

// components means how many disconnected nodes are in the graph

int main(void)
{
          int n, e;
          cin >> n >> e;
          int count = 1;

          vector<int> adj_list[n + 1];
          bool visited[n + 1];

          memset(visited, false, sizeof(visited));

          while(e--)
          {
                    int a, b;
                    cin >> a >> b;

                    adj_list[a].push_back(b);
                    adj_list[b].push_back(a);
          }

          dfs(adj_list, 0, visited, count);

          cout << count << endl;
          return 0;
}