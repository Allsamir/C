#include <bits/stdc++.h>
using namespace std;

int shortes_dis[105];

void BFS(vector<pair<int, int>> (&adj_list)[], int src)
{
          priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

          pq.push({0, src});
          shortes_dis[src] = 0;

          while(!pq.empty()) // o(v)
          {
                    pair<int,int> par = pq.top();
                    pq.pop(); // v logv; // hence push and pop in priority queue is log n

                    if(par.first > shortes_dis[par.second])
                    {
                              continue; // if the distance is greater than the shortest distance then we will not consider it
                    }

                    for(auto child : adj_list[par.second]) //o(e)
                    {
                              int child_node = child.first;
                              int child_dis = child.second;

                              // path relaxation in optimized version
                              if((par.first + child_dis) < shortes_dis[child_node])
                              {
                                        shortes_dis[child_node] = par.first + child_dis;
                                        pq.push({shortes_dis[child_node], child_node}); // e logv // hence push and pop in priority queue is log n
                              }
                    }
          }

          // O(vlogv + e logv) // hence push and pop in priority queue is log n 
          // O(logv(v + e))
}

int main(void)
{
          int n, e;

          cin >> n >> e;

          vector<pair<int, int>> adj_list[n];

          while (e--)
          {
                    int a, b, w;

                    cin >> a >> b >> w;

                    adj_list[a].push_back({b, w});
                    // adj_list[b].push_back({a, w});
          }
          
          for(int x = 0; x < n; x++)
          {
                    shortes_dis[x] = INT_MAX;
          }

          BFS(adj_list, 0);

          for (int x = 0; x < n; x++)
          {
                    cout << x << " -> " << shortes_dis[x] << endl;
          }

          return 0;
}