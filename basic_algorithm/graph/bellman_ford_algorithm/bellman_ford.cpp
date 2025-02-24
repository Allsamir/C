#include <bits/stdc++.h>
using namespace std;

class Edge
{
public:
          int u, v, w;

          Edge(int u, int v, int w)
          {
                    this->u = u;
                    this->v = v;
                    this->w = w;
          }
};

int shortest_dis[105];
vector<Edge> edges;

void bellman_ford(int n, int src)
{
          // here n - 1 time we will relax the edges
          for (int i = 0; i < n - 1; i++)
          {
                    for (auto e : edges)
                    {
                              if (shortest_dis[e.u] != INT_MAX && (shortest_dis[e.u] + e.w) < shortest_dis[e.v])
                              {
                                        shortest_dis[e.v] = shortest_dis[e.u] + e.w;
                              }
                    }
          }

          // we will run the loop one more time to check if there is any negative cycle

          bool cycle = false;

          for (auto e : edges)
          {
                    if (shortest_dis[e.u] != INT_MAX && (shortest_dis[e.u] + e.w) < shortest_dis[e.v])
                    {
                             cycle = true;
                             break;
                    }
          }

          if (cycle)
          {
                    cout << "Negative cycle detected" << endl;
          }
          else 
          {
                    for (int i = 0; i < n; i++)
                    {
                              cout << "Shortest distance from " << src << " to " << i << " is " << shortest_dis[i] << endl;
                    }
          }
}

int main(void)
{
          int n, e;
          cin >> n >> e;

          while (e--)
          {
                    int u, v, w;
                    cin >> u >> v >> w;

                    edges.push_back(Edge(u, v, w));
                    // for undirected Graph
                    // edges.push_back(Edge(v, u, w));
          }

          // for (auto e : edges)
          // {
          //           cout << e.u << " " << e.v << " " << e.w << endl;
          // }

          for (int i = 0; i < n; i++)
          {
                    shortest_dis[i] = INT_MAX;
          }

          int src;
          cin >> src;
          shortest_dis[src] = 0;

          bellman_ford(n, src);

          return 0;
}