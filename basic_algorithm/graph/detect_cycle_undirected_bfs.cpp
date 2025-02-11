#include <bits/stdc++.h>
using namespace std;

bool visited[105];
int parent[105];

bool f = false;

void bfs(vector<int> (&adj_list)[], int n, int start)
{
          queue<int> q;
          q.push(start);
          visited[start] = true;

          while(!q.empty())
          {
                    int par = q.front();
                    q.pop();

                    // cout << par << " ";

                    for(auto child : adj_list[par])
                    {
                              if(visited[child] && parent[par] != child)
                              {
                                        f = true;
                              }

                              if(!visited[child])
                              {
                                        visited[child] = true;
                                        parent[child] = par;
                                        q.push(child);
                              }

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
                              bfs(adj_list, n, x);
                    }

          }

          if(f)
          {
                    cout << "Cycle is present" << endl;
          }
          else
          {
                    cout << "Cycle is not present" << endl;
          }
          
          return 0;
}