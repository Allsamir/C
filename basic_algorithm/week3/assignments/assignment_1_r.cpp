#include <bits/stdc++.h>
using namespace std;

#define INF LLONG_MAX 

class Edge 
{
          public:
             int v, u, w;
          
          Edge(int v, int u, long long w) : v(v), u(u), w(w) {}   

};

vector<Edge> edges;

vector<long long> shor_dis(100005, INF);

bool BallmenFord(int n, int src)
{
          for(int i = 1; i <= n - 1; i++)
          {
                    for(auto e : edges)
                    {
                              if(shor_dis[e.v] != INF && (shor_dis[e.v] + e.w) < shor_dis[e.u])
                              {
                                        shor_dis[e.u] = shor_dis[e.v] + e.w;
                              }
                    }
          }

          bool cycle = false;

          for(auto e : edges)
          {
                    if(shor_dis[e.v] != INF && (shor_dis[e.v] + e.w) < shor_dis[e.u])
                    {
                              cycle = true;
                              break;
                    }
          }

          return cycle;
}

int main(void)
{
          int n, e;
          cin >> n >> e;

          while(e--)
          {
                    int v, u, w;
                    cin >> v >> u >> w;
                    edges.push_back(Edge(v, u, w));
          }

          int src;
          cin >> src;
          shor_dis[src] = 0;

          if(BallmenFord(n, src))
          {
                    cout << "Negative Cycle Detected" << endl;
                    return 0;
          }

          int t;
          cin >> t;

          while(t--)
          {
                    int dest;
                    cin >> dest;

                    if(shor_dis[dest] == INF)
                    {
                              cout << "Not Possible" << endl;
                    }
                    else
                    {
                              cout << shor_dis[dest] << endl;
                    }
          }

          return 0;
}