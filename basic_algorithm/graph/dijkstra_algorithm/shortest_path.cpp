#include <bits/stdc++.h>
using namespace std;

vector<int> shortest_dis;
vector<int> parent;

void Dijkstra_algoritm(vector<pair<int, int>> (&adj)[], int src, int n)
{
          priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

          pq.push({0, src});
          shortest_dis[src] = 0;

          while (!pq.empty())
          {
                    pair<int, int> par = pq.top();
                    pq.pop();

                    int curr_dist = par.first;
                    int curr_node = par.second;

                    if (curr_dist > shortest_dis[curr_node])
                    {
                              continue;
                    }

                    for (auto child : adj[curr_node])
                    {
                              int child_node = child.first;
                              int child_dis = child.second;

                              if (shortest_dis[curr_node] + child_dis < shortest_dis[child_node])
                              {
                                        shortest_dis[child_node] = shortest_dis[curr_node] + child_dis;
                                        parent[child_node] = curr_node;
                                        pq.push({shortest_dis[child_node], child_node});
                              }
                    }
          }
}

int main()
{
          int n, m;
          cin >> n >> m;

          vector<pair<int, int>> adj[n + 1];
          shortest_dis.resize(n + 1, INT_MAX);
          parent.resize(n + 1, -1);

          for (int i = 0; i < m; i++)
          {
                    int a, b, w;
                    cin >> a >> b >> w;
                    adj[a].push_back({b, w});
                    adj[b].push_back({a, w});
          }

          Dijkstra_algoritm(adj, 1, n);

          if (shortest_dis[n] == INT_MAX)
          {
                    cout << -1;
                    return 0;
          }

          vector<int> path;
          int node = n;

          while (node != -1)
          {
                    path.push_back(node);
                    node = parent[node];
          }

          reverse(path.begin(), path.end());

          for (int x : path)
          {
                    cout << x << " ";
          }

          return 0;
}
