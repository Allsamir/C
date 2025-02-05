#include <bits/stdc++.h>

using namespace std;

void BFS_print_messge_route(vector<int> (&adj_list)[], int n, int start, int dst)
{
          bool visited[n + 1];
          int level[n + 1];
          int parents[n + 1];

          memset(visited, false, sizeof(visited));
          memset(level, 1, sizeof(level));
          memset(parents, 0, sizeof(parents));

          queue<int> q;
          q.push(start);
          visited[start] = true;
          level[start] = 1;

          while (!q.empty())
          {
                    int par = q.front();

                    q.pop();

                    for (auto child : adj_list[par])
                    {
                              if (!visited[child])
                              {
                                        q.push(child);
                                        visited[child] = true;
                                        level[child] = level[par] + 1;
                                        parents[child] = par;
                              }
                    }
          }

          if(!visited[dst])
          {
                    cout << "IMPOSSIBLE" << endl;
                    return;
          }

          cout << level[dst] << endl;

          int node = dst;
          vector<int> shortest_distant;

          while (node != 0)
          {
                    shortest_distant.push_back(node);
                    node = parents[node];
          }

          for (auto it = shortest_distant.rbegin(), end = shortest_distant.rend(); it != end; it++)
          {
                    cout << *it << " ";
          }

          cout << endl;
}

int main(void)
{
          int n, e;

          cin >> n >> e;

          vector<int> adj_list[n + 1];

          while (e--)
          {
                    int a, b;
                    cin >> a >> b;

                    adj_list[a].push_back(b);
                    adj_list[b].push_back(a);
          }

          BFS_print_messge_route(adj_list, n, 1, n);
          return 0;
}
