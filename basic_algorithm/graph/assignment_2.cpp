#include <bits/stdc++.h>
using namespace std;

void bfs(vector<int> adj[], int src, int n)
{
          bool visited[n + 1];

          memset(visited, false, sizeof(visited));

          queue<int> q;
          q.push(src);
          visited[src] = true;

          vector<int> childs;

          while (!q.empty())
          {
                    int par = q.front();
                    q.pop();
                    
                    if(adj[par].size() == 0)
                    {
                              cout << -1 << endl;
                              return;
                    }
                    
                    for (auto child : adj[par])
                    {
                              if(!visited[child])
                              {
                                        childs.push_back(child);           
                                        visited[child] = true;
                                        // q.push(child);
                              }
                    }
          }

          sort(childs.begin(), childs.end(), greater<int>());

          for (auto child : childs)
          {
                    cout << child << " ";
          }

          cout << endl;
}

int main(void)
{
          // take the graph input as adjacency list as directed graph
          // on each query, you have to run bfs from src which is given in the query
          int n, e;
          cin >> n >> e;

          vector<int> adj[n + 1];

          while (e--)
          {
                    int a, b;
                    cin >> a >> b;
                    adj[a].push_back(b);
                    adj[b].push_back(a);
          }

          int q;
          cin >> q;

          while(q--)
          {
                    int src;
                    cin >> src;
                    bfs(adj, src, n);
          }



          return 0;
}