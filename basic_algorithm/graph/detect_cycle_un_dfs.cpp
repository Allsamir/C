#include <bits/stdc++.h>
using namespace std;

bool visited[105];
int parent[105];
bool f = false;

void dfs(vector<int> (&adj_list)[], int n, int start)
{
          visited[start] = true;

          // cout << start << " ";

          for(auto child : adj_list[start])
          {

                    if(visited[child] && parent[start] != child)
                    {
                              f = true;
                    }

                    if(!visited[child])
                    {
                              parent[child] = start;
                              dfs(adj_list, n, child);
                    }
          }
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
                    adj_list[b].push_back(a);
          }

          memset(visited, false, sizeof(visited));
          memset(parent, -1, sizeof(parent));

          for(int x = 0; x < n; x++)
          {
                    if(!visited[x])
                    {
                              dfs(adj_list, n, x);
                    }
          }

          // for(int x = 0; x < n; x++)
          // {
          //           cout << parent[x] << " ";
          // }

          if(f)
          {
                    cout << "Cycle detected" << endl;
          }
          else
          {
                    cout << "No cycle detected" << endl;
          }
          
          return 0;
}