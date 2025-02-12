#include<bits/stdc++.h>

using namespace std;

bool visited[105];
bool path_vis[105];
bool cycle = false;

void dfs(vector<int> (&adj_list)[], int n, int src)
{
          visited[src] = true;
          path_vis[src] = true;

          // cout << src << " ";

          for(auto child : adj_list[src])
          {
                    if(visited[src] && path_vis[child])
                    {
                              cycle = true;
                    }

                    if(!visited[child])
                    {
                              dfs(adj_list, n, child);
                    }
          }

          // return
          path_vis[src] = false;
}

    int main(void)
{
          int n, e;

          cin >> n >> e;

          vector<int> adj_list[n];

          while(e--)
          {
                    int a, b;
                    cin >> a >> b;

                    adj_list[a].push_back(b);
          }

          for(int x = 0; x < n; x++)
          {
                    if(!visited[x])
                    {
                              dfs(adj_list, n, x);
                    }
          }

          if(cycle)
          {
                    cout << "Cycle detected" << endl;
          }
          else
          {
                    cout << "No cycle detected" << endl;
          }

          return 0;
}
