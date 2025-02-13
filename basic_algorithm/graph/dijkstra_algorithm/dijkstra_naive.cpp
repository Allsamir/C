#include <bits/stdc++.h>
using namespace std;

int shortest_dis[105];

void BFS(vector<pair<int, int>> (&adj_list)[], int src)
{
          queue<pair<int, int>> q;

          q.push({src, 0});
          
          shortest_dis[src] = 0;

          while (!q.empty())
          {
                    pair<int, int> par = q.front();

                    q.pop();

                    int par_node = par.first;
                    int par_node_dis = par.second;

                    for(auto child : adj_list[par_node])
                    {
                              int child_node = child.first;
                              int child_dis = child.second;

                              // path relaxation
                              if ((par_node_dis + child_dis) < shortest_dis[child_node])
                              {
                                        shortest_dis[child_node] = par_node_dis + child_dis;
                                        q.push({child_node, shortest_dis[child_node]});
                              }
                    }
          }
          
}

int main(void)
{
          int n, e;
          cin >> n >> e;

          vector<pair<int, int>> adj_list[n];

          while (e--)
          {
                    int a, b, w; // w is the weight for a to b;

                    cin >> a >> b >> w;

                    adj_list[a].push_back({b, w});
                    adj_list[b].push_back({a, w});
          }

          for(int x = 0; x < n; x++)
          {
                    shortest_dis[x] = INT_MAX;
          }

          BFS(adj_list, 2);

          for(int x = 0; x < n; x++)
          {
                    cout << x << " -> " << shortest_dis[x] << endl;
          }
          
          return 0;
}