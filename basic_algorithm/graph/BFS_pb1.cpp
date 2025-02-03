#include <bits/stdc++.h>

using namespace std;

bool can_we_go(vector<int> adj_list[], int n, int src, int dst)
{
          bool visited[n];

          memset(visited, false, sizeof(visited));

          queue<int> q;
          q.push(src);
          visited[src] = true;

          while(!q.empty())
          {
                    int par = q.front();
                    q.pop();

                    for (auto child : adj_list[par])
                    {
                              if(child == dst)
                                 return true;

                              if(!visited[child])
                              {
                                        q.push(child);
                                        visited[child] = true;
                              }   
                    }
          }

          return false;
}

int main(void)
{
          int n, e;
          cin >> n >> e;

          vector<int> adj_list[n];

          while (e--)
          {
                    int a, b;
                    cin >> a >> b;
                    
                    // undirected graph input done
                    adj_list[a].push_back(b);
                    adj_list[b].push_back(a);
          }

          int src, dst;
          cin >> src >> dst;

          can_we_go(adj_list, n, src, dst) ? cout << "Yes" : cout << "No";
          
          return 0;
}